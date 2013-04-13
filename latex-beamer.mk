PDF = $(addsuffix .pdf, $(BASENAME))
PDFLATEX = pdflatex
OUT_DIR = texfiles
STY_DIR = $(DEPTH)/template/

.PHONY: clean all

all: $(PDF)

%.pdf: %.tex
	@test -d $(OUT_DIR) || mkdir $(OUT_DIR)
	# Twice, so TOC is also updated
	@TEXINPUTS=$(STY_DIR)//: $(PDFLATEX) -output-directory $(OUT_DIR) $<
	@TEXINPUTS=$(STY_DIR)//: $(PDFLATEX) -output-directory $(OUT_DIR) $<
	@ln -sf $(OUT_DIR)/$@ .

clean:
	@$(RM) -r $(OUT_DIR)
	@$(RM) $(PDF)
