TEXFILES = oop1.tex oop2.tex oop3.tex oop4.tex oop5.tex oop6.tex oop7.tex oop8.tex oop9.tex oop10.tex oop11.tex
HIGHLIGHT_OPTS = -L -f -t 8 -c highlight.sty

all: $(TEXFILES)
	
oop1.tex: Player.cpp
	highlight $(HIGHLIGHT_OPTS) -i $< -o $@ -l --font-size=footnotesize
	
oop2.tex: Player1.cpp
	highlight $(HIGHLIGHT_OPTS) -i $< -o $@ -l --font-size=footnotesize

oop3.tex: Player2.cpp
	highlight $(HIGHLIGHT_OPTS) -i $< -o $@ -l --font-size=footnotesize

oop4.tex: Player3.cpp
	highlight $(HIGHLIGHT_OPTS) -i $< -o $@ -l --font-size=footnotesize

oop5.tex: Player4.cpp
	highlight $(HIGHLIGHT_OPTS) -i $< -o $@ -l --font-size=footnotesize

oop6.tex: Player5.cpp
	highlight $(HIGHLIGHT_OPTS) -i $< -o $@ -l --font-size=footnotesize

oop7.tex: Player6.cpp
	highlight $(HIGHLIGHT_OPTS) -i $< -o $@ -l --font-size=footnotesize

oop8.tex: Player7.cpp
	highlight $(HIGHLIGHT_OPTS) -i $< -o $@ -l --font-size=footnotesize

oop9.tex: Player8.cpp
	highlight $(HIGHLIGHT_OPTS) -i $< -o $@ -l --font-size=footnotesize

oop10.tex: Player9.cpp
	highlight $(HIGHLIGHT_OPTS) -i $< -o $@ -l --font-size=footnotesize

oop11.tex: Player10.cpp
	highlight $(HIGHLIGHT_OPTS) -i $< -o $@ -l --font-size=footnotesize

.PHONY: clean
clean:
	rm -f $(TEXFILES) highlight.sty

