BASENAME = eclipse
PDF = $(addsuffix .pdf, $(BASENAME))
TEX = $(addsuffix .tex, $(BASENAME))
PDFLATEX = pdflatex
EXTRA_EXTENSIONS = .pdf .aux .log .nav .out .snm .toc
CLEAN_FILES = $(addprefix $(BASENAME), $(EXTRA_EXTENSIONS))

.PHONY: clean all

$(PDF): $(TEX)
	$(PDFLATEX) $<
	$(PDFLATEX) $<  # Twice, so TOC is also updated

clean:
	-rm -f $(CLEAN_FILES) *~
