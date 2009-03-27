TEXFILES = 01.tex 02.tex
HIGHLIGHT_OPTS = -L -f -t 8 -c highlight.sty

all: $(TEXFILES)

01.tex: 01.py
	highlight $(HIGHLIGHT_OPTS) -i $< -o $@ -l --font-size=small

02.tex: 02.py
	highlight $(HIGHLIGHT_OPTS) -i $< -o $@ -l --font-size=small

.PHONY: clean
clean:
	rm -f $(TEXFILES) highlight.sty
