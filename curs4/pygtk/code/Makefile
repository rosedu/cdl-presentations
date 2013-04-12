TEXFILES = 01.tex 02.tex 03.tex
HIGHLIGHT_OPTS = -L -f -t 8 -c highlight.sty

all: $(TEXFILES)

01.tex: 01.py
	highlight $(HIGHLIGHT_OPTS) -i $< -o $@ -l --font-size=small --syntax=py

02.tex: 02.py
	highlight $(HIGHLIGHT_OPTS) -i $< -o $@ -l --font-size=small --syntax=py

03.tex: 03.py
	highlight $(HIGHLIGHT_OPTS) -i $< -o $@ -l --font-size=footnotesize --syntax=py

.PHONY: clean
clean:
	rm -f $(TEXFILES) highlight.sty
