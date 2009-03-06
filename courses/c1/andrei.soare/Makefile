template.pdf: andrei.soare.tex code/Makefile
	cd code && make
	pdflatex $<
	pdflatex $< # Twice, so TOC is also updated

.PHONY: clean
clean:
	cd code && make clean
	rm -f andrei.soare.pdf andrei.soare.aux andrei.soare.log andrei.soare.nav andrei.soare.out andrei.soare.snm andrei.soare.toc
