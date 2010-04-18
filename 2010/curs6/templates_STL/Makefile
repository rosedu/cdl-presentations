BASENAME = templates_STL
PDF = $(addsuffix .pdf, $(BASENAME))
TEX = $(addsuffix .tex, $(BASENAME))
PDFLATEX = pdflatex
EXTRA_EXTENSIONS = .pdf .aux .log .nav .out .snm .toc
CLEAN_FILES = $(addprefix $(BASENAME), $(EXTRA_EXTENSIONS))
STY_DIR = ../../../template/
HIGHLIGHT_DIR = code

.PHONY: clean all

all: $(PDF)

$(PDF): $(TEX) $(HIGHLIGHT_DIR)/Makefile
	cd $(HIGHLIGHT_DIR) && make
	TEXINPUTS=$(STY_DIR)//: $(PDFLATEX) $<
	TEXINPUTS=$(STY_DIR)//: $(PDFLATEX) $<	# Twice, so TOC is also updated

clean:
	cd $(HIGHLIGHT_DIR) && make clean
	rm -f $(CLEAN_FILES) *~
