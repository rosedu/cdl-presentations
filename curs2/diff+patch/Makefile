DIST = diff-patch
TRASHEXT = .pdf .aux .log .nav .out .snm .toc
TRASH = $(addprefix $(DIST), $(TRASHEXT))

all: $(DIST).pdf
$(DIST).pdf: $(DIST).tex code/Makefile
	cd code && make
	pdflatex $<
	pdflatex $< # Twice, so TOC is also updated

.PHONY: clean
clean:
	cd code && make clean
	rm -f $(TRASH)
	rm -f *~

