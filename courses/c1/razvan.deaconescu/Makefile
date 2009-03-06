BASENAME = cdl_c1_ml_irc
PDF = $(addsuffix .pdf, $(BASENAME))
TEX = $(addsuffix .tex, $(BASENAME))
PDFLATEX = pdflatex
EXTRA_EXTENSIONS = .pdf .aux .log .nav .out .snm .toc
CLEAN_FILES = $(addprefix $(BASENAME), $(EXTRA_EXTENSIONS))

all: $(PDF)

$(PDF): $(TEX)
	$(PDFLATEX) $<
	$(PDFLATEX) $<	# Twice, so TOC is also updated

.PHONY: clean all
clean:
	-rm -f $(CLEAN_FILES) *~
