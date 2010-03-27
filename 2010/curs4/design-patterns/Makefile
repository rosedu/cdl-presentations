BASENAME = design-patterns
HIGHLIGHT = code
PDF = $(addsuffix .pdf, $(BASENAME))
TEX = $(addsuffix .tex, $(BASENAME))
PDFLATEX = pdflatex
EXTRA_EXTENSIONS = .pdf .aux .log .nav .out .snm .toc
CLEAN_FILES = $(addprefix $(BASENAME), $(EXTRA_EXTENSIONS))

.PHONY: clean all

all: $(PDF)

$(PDF): $(TEX) $(HIGHLIGHT)/Makefile
	make -C $(HIGHLIGHT)
	$(PDFLATEX) $<
	$(PDFLATEX) $<	# Twice, so TOC is also updated

clean:
	-make -C $(HIGHLIGHT) clean
	-rm -f $(CLEAN_FILES) *~
