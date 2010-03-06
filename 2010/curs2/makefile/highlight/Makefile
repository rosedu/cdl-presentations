TEXFILES = 01.tex 03.tex 05.tex makefile5.tex makefile1.tex makefile2.tex makefile3.tex makefile4.tex
HIGHLIGHT_OPTS = -L -f -t 8 -c highlight.sty

all: $(TEXFILES)

01.tex: 01.sh
	highlight $(HIGHLIGHT_OPTS) -i $< -o $@

03.tex: 03.sh
	highlight $(HIGHLIGHT_OPTS) -i $< -o $@

05.tex: 05.sh
	highlight $(HIGHLIGHT_OPTS) -i $< -o $@

makefile5.tex: Makefile.ex5
	highlight $(HIGHLIGHT_OPTS) -i $< -o $@ -l --syntax=make --font-size=small

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
