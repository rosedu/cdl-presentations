TEXFILES = 01.tex 03.tex 05.tex 06.tex makefile.tex makefile1.tex makefile2.tex makefile3.tex makefile4.tex
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

makefile1.tex: Makefile.ex1
	highlight $(HIGHLIGHT_OPTS) -i $< -o $@ -l --syntax=make --font-size=footnotesize

makefile2.tex: Makefile.ex2
	highlight $(HIGHLIGHT_OPTS) -i $< -o $@ -l --syntax=make --font-size=footnotesize

makefile3.tex: Makefile.ex3
	highlight $(HIGHLIGHT_OPTS) -i $< -o $@ -l --syntax=make --font-size=footnotesize

makefile4.tex: Makefile.ex4
	highlight $(HIGHLIGHT_OPTS) -i $< -o $@ -l --syntax=make --font-size=footnotesize

.PHONY: clean
clean:
	rm -f $(TEXFILES) highlight.sty
