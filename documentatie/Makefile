BASENAME = documentatie
PDF = $(addsuffix .pdf, $(BASENAME))
TEX = $(addsuffix .tex, $(BASENAME))
PDFLATEX = pdflatex
OUT_DIR = texfiles
STY_DIR = ../../template/
HIGHLIGHT_DIR = code

.PHONY: clean all

all: $(PDF)

$(PDF): $(TEX) $(HIGHLIGHT_DIR)/Makefile
	cd $(HIGHLIGHT_DIR) && make
	test -d $(OUT_DIR) || mkdir $(OUT_DIR)
	# Twice, so TOC is also updated
	TEXINPUTS=$(STY_DIR)//: $(PDFLATEX) -output-directory $(OUT_DIR) $<
	TEXINPUTS=$(STY_DIR)//: $(PDFLATEX) -output-directory $(OUT_DIR) $<
	mv $(OUT_DIR)/$(PDF) .

clean:
	rm -rf $(OUT_DIR) *~
	rm -f $(PDF)
	cd $(HIGHLIGHT_DIR) && make clean
