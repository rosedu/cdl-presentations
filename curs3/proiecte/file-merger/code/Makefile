TEXFILES = 01.tex 02.tex diff_u.tex
HIGHLIGHT_OPTS = -L -l -f -t 8 -c highlight.sty

all: $(TEXFILES)

%.tex: %.patch
	highlight $(HIGHLIGHT_OPTS) -l -i $< -o $@

%.tex: %.sh
	highlight $(HIGHLIGHT_OPTS) -i $< -o $@

%.tex: %.c
	highlight $(HIGHLIGHT_OPTS) -i $< -o $@

.PHONY: clean
clean:
	rm -f $(TEXFILES) highlight.sty
