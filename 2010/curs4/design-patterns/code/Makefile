SRCFILES = $(wildcard *.cpp)
TEXFILES = $(patsubst %.cpp,%.tex,$(SRCFILES))
HIGHLIGHT_OPTS = -L -l -f -t 4 -c highlight.sty

all: $(TEXFILES)

.cpp.tex:
	highlight $(HIGHLIGHT_OPTS) -i $< -o $@

.PHONY: clean
clean:
	rm -f $(TEXFILES) highlight.sty
