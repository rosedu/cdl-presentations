slideshow.pdf: slideshow.tex highlight/Makefile
	cd highlight && make
	pdflatex $<
	pdflatex $< # Twice, so TOC is also updated

.PHONY: clean
clean:
	cd highlight && make clean
	rm -f slideshow.pdf slideshow.aux slideshow.log slideshow.nav slideshow.out slideshow.snm slideshow.toc
