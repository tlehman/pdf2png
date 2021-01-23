/**
 * Author: Tobi Lehman <mail@tobilehman.com>
 * Purpose: To read a PDF and produce a PNG file for each page.
 * License: GPLv3
 */
#include <cairo.h>
#include <poppler.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

enum errors { NO_ERROR, FILE_NOT_GIVEN, FILE_NOT_EXIST, PDF_INVALID };

void usage() {
    fprintf(stderr, "Usage: ./test <file.pdf>\n");
}

// create_png_filename maps a uri -> png filename:
//    create_png_filename("file:///home/foo/doc1.pdf", 0) -> "doc1_0.png"
void create_png_filename(char *uri, int index, char *png_filename) {
    char *filename_with_no_ext = strcasestr(uri, ".pdf");
    char suffix[24];
    filename_with_no_ext--;
    while(*filename_with_no_ext != '/') {
        filename_with_no_ext--;
    }
    filename_with_no_ext++;
    strcpy(png_filename, filename_with_no_ext);
    char *p = strchr(png_filename, '.');
    
    sprintf(suffix, "_%d.png", index);
    strcpy(p, suffix);
    p = strchr(png_filename, '.');

}

int main(int argc, char **argv) {
    if(argc < 2) {
        usage();
        return FILE_NOT_GIVEN;
    }
    if(access(argv[1], F_OK) != 0) {
        fprintf(stderr, "File %s does not exist\n", argv[1]);
        return FILE_NOT_EXIST;
    }
    GError *err = NULL;

    // Open PDF using Poppler
    char uri[2048];
    sprintf(uri, "file://%s", argv[1]);
    PopplerDocument *doc = poppler_document_new_from_file(uri, NULL, &err);
    if(err != NULL) {
        // Report error to user, and free error
        fprintf(stderr, "Unable to read file: %s\n", err->message);
        g_error_free(err);
        return PDF_INVALID;
    }

    // Assumes two pages, scanned image
    PopplerPage *page0 = poppler_document_get_page(doc, 0);
    cairo_surface_t *pic0 = poppler_page_get_image(page0, 0);

    PopplerPage *page1 = poppler_document_get_page(doc, 1);
    cairo_surface_t *pic1 = poppler_page_get_image(page1, 0);

    char pic0_png[2048];
    char pic1_png[2048];
    create_png_filename(uri, 0, pic0_png);
    create_png_filename(uri, 1, pic1_png);

    printf("Writing %s\n", pic0_png);
    cairo_surface_write_to_png(pic0, pic0_png);

    printf("Writing %s\n", pic1_png);
    cairo_surface_write_to_png(pic1, pic1_png);

    cairo_surface_destroy(pic0);
    cairo_surface_destroy(pic1);

    return NO_ERROR;
}
