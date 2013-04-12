BASENAME = git
PDF = $(addsuffix .pdf, $(BASENAME))
TEX = $(addsuffix .tex, $(BASENAME))
PDFLATEX = pdflatex
OUT_DIR = texfiles
STY_DIR = ../../template/

.PHONY: clean all

all: $(PDF)

$(PDF): $(TEX)
	test -d $(OUT_DIR) || mkdir $(OUT_DIR)
	# Twice, so TOC is also updated
	TEXINPUTS=$(STY_DIR)//: $(PDFLATEX) -output-directory $(OUT_DIR) $<
	TEXINPUTS=$(STY_DIR)//: $(PDFLATEX) -output-directory $(OUT_DIR) $<
	ln -sf $(OUT_DIR)/$(PDF) .

clean:
	$(RM) -r $(OUT_DIR)
	$(RM) $(PDF)
