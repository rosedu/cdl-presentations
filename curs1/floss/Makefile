all: programe_libere.pdf
programe_libere.pdf: programe_libere.tex
	pdflatex $<
	pdflatex $< # Twice, so TOC is also updated

.PHONY: clean
clean:
	rm -f programe_libere.pdf programe_libere.aux programe_libere.log programe_libere.nav programe_libere.out programe_libere.snm programe_libere.toc
