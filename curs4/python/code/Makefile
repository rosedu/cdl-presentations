TEXFILES = if.tex fun.tex class.tex
PATCH_FILES := $(patsubst %.tex, %.py, $(TEXFILES))
HIGHLIGHT_OPTS = -L -l -f -t 8 -c highlight.sty

all: $(TEXFILES)

%.tex: %.py
	highlight $(HIGHLIGHT_OPTS) -i $< -o $@

.PHONY: clean
clean:
	rm -f $(TEXFILES) highlight.sty
