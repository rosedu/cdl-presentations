TEXFILES = 01.tex
HIGHLIGHT_OPTS = -L -l -f -t 8 -c highlight.sty

all: $(TEXFILES)

01.tex: 01.sh
	highlight $(HIGHLIGHT_OPTS) -i $< -o $@

.PHONY: clean
clean:
	rm -f $(TEXFILES) highlight.sty
