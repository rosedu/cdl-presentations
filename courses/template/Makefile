template.pdf: template.tex code/Makefile
	cd code && make
	pdflatex $<
	pdflatex $< # Twice, so TOC is also updated

.PHONY: clean
clean:
	cd code && make clean
	rm -f template.{pdf,aux,log,nav,out,snm,toc}
