TEXFILES = bad.tex good.tex sintaxa.tex doxygen.tex
HIGHLIGHT_OPTS = --out-format=latex -l -f -t 8 -c highlight.sty

all: $(TEXFILES)

bad.tex: bad.cpp
	highlight $(HIGHLIGHT_OPTS) -i $< -o $@

sintaxa.tex: sintaxa.cpp
	highlight $(HIGHLIGHT_OPTS) -i $< -o $@

good.tex: good.cpp
	highlight $(HIGHLIGHT_OPTS) -i $< -o $@

doxygen.tex: doxygen.cpp
	highlight $(HIGHLIGHT_OPTS) -i $< -o $@

.PHONY: clean
clean:
	rm -f $(TEXFILES) highlight.sty
