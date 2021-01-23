all:
	gcc -I/usr/local/Cellar/poppler/20.12.1/include/poppler/glib \
		-I/usr/local/Cellar/glib/2.66.4/include/glib-2.0 \
		-I/usr/local/Cellar/glib/2.66.4/lib/glib-2.0/include \
		-I/usr/local/Cellar/cairo/1.16.0_3/include/cairo \
		-L/usr/local/Cellar/poppler/20.12.1/lib \
		-L/usr/local/Cellar/glib/2.66.4/lib \
		-L/usr/local/opt/gettext/lib \
		-L/usr/local/Cellar/cairo/1.16.0_3/lib \
		-lpoppler-glib -lgobject-2.0 -lglib-2.0 -lintl -lcairo -g pdf2png.c -o pdf2png

clean:
	rm pdf2png && rm -rf pdf2png.dSYM

