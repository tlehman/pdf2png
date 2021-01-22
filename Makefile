versy:
	gcc -c -Iversypdf/ \
		-Iversypdf/png \
		-Iversypdf/flate \
		-Iversypdf/freetype \
		-Iversypdf/jpeg \
		-Iversypdf/png \
		-Iversypdf/tiff \
		versypdf/sources/*.c ; mv *.o obj/

all: versy
	gcc obj/*.o pdf2jpg.c -o pdf2jpg

clean:
	rm obj/* pdf2jpg

