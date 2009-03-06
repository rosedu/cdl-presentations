TEXFILES = 01.tex 03.tex 05.tex 06.tex makefile.tex
HIGHLIGHT_OPTS = -L -f -t 8 -c highlight.sty

all: $(TEXFILES)

01.tex: 01.sh
	highlight $(HIGHLIGHT_OPTS) -i $< -o $@

03.tex: 03.sh
	highlight $(HIGHLIGHT_OPTS) -i $< -o $@

05.tex: 05.sh
	highlight $(HIGHLIGHT_OPTS) -i $< -o $@

06.tex: 06.sh
	highlight $(HIGHLIGHT_OPTS) -i $< -o $@ --font-size=small

makefile.tex: Makefile.example
	highlight $(HIGHLIGHT_OPTS) -i $< -o $@ -l --syntax=make --font-size=footnotesize

.PHONY: clean
clean:
	rm -f $(TEXFILES) highlight.sty
