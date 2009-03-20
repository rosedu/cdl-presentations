DIST = proiect-file-merger
HIGHLIGHT = code
TRASHEXT = .pdf .aux .log .nav .out .snm .toc
TRASH = $(addprefix $(DIST), $(TRASHEXT))

all: $(DIST).pdf
$(DIST).pdf: $(DIST).tex $(HIGHLIGHT)/Makefile
	cd code && make
	pdflatex $<
	pdflatex $< # Twice, so TOC is also updated

.PHONY: clean
clean:
	cd $(HIGHLIGHT) && make clean
	rm -f $(TRASH)
	rm -f *~
