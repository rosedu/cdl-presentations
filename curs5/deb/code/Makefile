SH_FILES := $(shell echo *.sh)
TEX_FILES := $(SH_FILES:.sh=.tex)

HIGHLIGHT_OPTS = -L -l -f -t 8 -c highlight.sty

all: $(TEX_FILES)

%.tex: %.sh
	highlight $(HIGHLIGHT_OPTS) -i $< -o $@

.PHONY: clean
clean:
	rm -f $(TEX_FILES) highlight.sty
	rm -f *~
