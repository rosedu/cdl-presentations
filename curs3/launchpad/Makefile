DIST = launchpad
TRASHEXT = .pdf .aux .log .nav .out .snm .toc
TRASH = $(addprefix $(DIST), $(TRASHEXT))


.PHONY: all clean

all: $(DIST).pdf
$(DIST).pdf: $(DIST).tex
	pdflatex $<
	pdflatex $< # Twice, so TOC is also updated

clean:
	rm -f $(TRASH) *~
