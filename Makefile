all:
	gcc $(shell pkg-config --cflags glib-2.0) $(shell pkg-config --libs glib-2.0) \
		$(shell pkg-config --cflags poppler) $(shell pkg-config --libs poppler) \
		$(shell pkg-config --cflags poppler-glib) $(shell pkg-config --libs poppler-glib) \
		$(shell pkg-config --cflags cairo) $(shell pkg-config --libs cairo) \
		-g pdf2png.c -o pdf2png

clean:
	rm pdf2png && rm -rf pdf2png.dSYM

