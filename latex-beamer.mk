PDF = $(addsuffix .pdf, $(BASENAME))
TEX = $(addsuffix .tex, $(BASENAME))

PDFLATEX = pdflatex
OUT_DIR = texfiles
STY_DIR = $(DEPTH)/template/

CODEINPUTSTEX = $(addprefix $(CODEDIR)/, $(addsuffix .tex, $(CODEINPUTS)))

HIGHLIGHTSTY = highlight.sty

ifndef $(TABSIZE)
	TABSIZE = 4
endif

HIGHLIGHT_OPTS = --out-format=latex -l -f -t $(TABSIZE) -c $(HIGHLIGHTSTY)

.PHONY: clean all

all: $(PDF)

$(PDF): $(TEX) $(CODEINPUTSTEX)
	@# Construct $(OUT_DIR) if it doesn't exist
	@test -d $(OUT_DIR) || mkdir $(OUT_DIR)
	@# Twice, so TOC is also updated
	@TEXINPUTS=$(STY_DIR)//: $(PDFLATEX) -output-directory $(OUT_DIR) $<
	@TEXINPUTS=$(STY_DIR)//: $(PDFLATEX) -output-directory $(OUT_DIR) $<
	@ln -sf $(OUT_DIR)/$@ .

clean:
	@$(RM) -r $(OUT_DIR)
	@$(RM) $(PDF) $(CODEINPUTSTEX) $(CODEDIR)/$(HIGHLIGHTSTY)

# highlight rules
%.cpp.tex: %.cpp
	@highlight $(HIGHLIGHT_OPTS) -i $< -o $@

%.h.tex: %.h
	@highlight $(HIGHLIGHT_OPTS) -i $< -o $@
