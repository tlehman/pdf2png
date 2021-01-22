#include "VSDocA.h"
#include <stdio.h>
#include <unistd.h>

enum errors { NO_ERROR, FILE_NOT_GIVEN, FILE_NOT_EXIST };

void usage() {
    printf("Usage: ./test <file.pdf>\n");
}

int main(int argc, char **argv) {
    PDFLibHandle lib;
    if(argc < 2) {
        usage();
        return FILE_NOT_GIVEN;
    }
    if(access(argv[1], F_OK) != 0) {
        printf("file %s does not exist\n", argv[1]);
        return FILE_NOT_EXIST;
    }
    PDFDocHandle doc = PDFDocLoadFromFile(lib, argv[1]);
    return NO_ERROR;
}
