DIST = template
$(DIST).pdf: $(DIST).tex code/Makefile
	cd code && make
	pdflatex $<
	pdflatex $< # Twice, so TOC is also updated

.PHONY: clean
clean:
	cd code && make clean
	rm -f $(DIST).pdf $(DIST).aux $(DIST).log $(DIST).nav $(DIST).out $(DIST).snm $(DIST).toc
