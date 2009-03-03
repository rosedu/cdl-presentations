template.pdf: template.tex code/Makefile
	cd code && make
	pdflatex $<
	pdflatex $< # Twice, so TOC is also updated

.PHONY: clean
clean:
	cd code && make clean
	rm -f template.pdf template.aux template.log template.nav template.out template.snm template.toc
