TEXFILES = DerivareContainer1.tex DerivareContainer2.tex ExempluSortCriteriu.tex ExempluSort.tex ExempluSet.tex ParcurgeVector.tex Echipa.tex EchipaTester.tex SimpleClass.tex SimpleClassTester.tex SimpleInt.tex 
HIGHLIGHT_OPTS = -L -f -t 8 -c highlight.sty

all: $(TEXFILES)

SimpleInt.tex: SimpleInt.h
	highlight $(HIGHLIGHT_OPTS) -i $< -o $@ --font-size=footnotesize -l

SimpleClass.tex: SimpleClass.cpp
	highlight $(HIGHLIGHT_OPTS) -i $< -o $@ --font-size=footnotesize -l

SimpleClassTester.tex: SimpleClassTester.cpp
	highlight $(HIGHLIGHT_OPTS) -i $< -o $@ --font-size=footnotesize -l

Echipa.tex: Echipa.cpp
	highlight $(HIGHLIGHT_OPTS) -i $< -o $@ --font-size=footnotesize -l

EchipaTester.tex: EchipaTester.cpp
	highlight $(HIGHLIGHT_OPTS) -i $< -o $@ --font-size=footnotesize -l

ParcurgeVector.tex: ParcurgeVector.cpp
	highlight $(HIGHLIGHT_OPTS) -i $< -o $@ --font-size=footnotesize -l

ExempluSet.tex: ExempluSet.cpp
	highlight $(HIGHLIGHT_OPTS) -i $< -o $@ --font-size=footnotesize -l

ExempluSort.tex: ExempluSort.cpp
	highlight $(HIGHLIGHT_OPTS) -i $< -o $@ --font-size=footnotesize -l

ExempluSortCriteriu.tex: ExempluSortCriteriu.cpp
	highlight $(HIGHLIGHT_OPTS) -i $< -o $@ --font-size=footnotesize -l

DerivareContainer1.tex: DerivareContainer1.cpp
	highlight $(HIGHLIGHT_OPTS) -i $< -o $@ --font-size=footnotesize -l

DerivareContainer2.tex: DerivareContainer2.cpp
	highlight $(HIGHLIGHT_OPTS) -i $< -o $@ --font-size=footnotesize -l

.PHONY: clean
clean:
	rm -f $(TEXFILES) highlight.sty
