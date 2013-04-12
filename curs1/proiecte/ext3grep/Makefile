BASENAME = ext3grep
PDF = $(addsuffix .pdf, $(BASENAME))
TEX = $(addsuffix .tex, $(BASENAME))
PDFLATEX = pdflatex
EXTRA_EXTENSIONS = .aux .log .nav .out .snm .toc
CLEAN_FILES = $(addprefix $(BASENAME), $(EXTRA_EXTENSIONS))
STY_DIR = ../../../../template/

.PHONY: clean all

all: $(PDF)

$(PDF): $(TEX)
	TEXINPUTS=$(STY_DIR)//: $(PDFLATEX) $<
	TEXINPUTS=$(STY_DIR)//: $(PDFLATEX) $<	# Twice, so TOC is also updated

clean:
	-rm -f $(CLEAN_FILES) *~
