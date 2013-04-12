TEXFILES = 01.tex 02.tex
HIGHLIGHT_OPTS = -L -l -f -t 8 -c highlight.sty

all: $(TEXFILES)

01.tex: 01.sh
	highlight $(HIGHLIGHT_OPTS) -i $< -o $@

02.tex: 02.c
	highlight $(HIGHLIGHT_OPTS) -i $< -o $@

.PHONY: clean
clean:
	rm -f $(TEXFILES) highlight.sty
