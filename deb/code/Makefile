SH_FILES := $(shell echo *.sh)
TXT_FILES := $(shell echo *.txt)
STDOUT_FILES := $(shell echo *.stdout)
TEX_FILES := $(SH_FILES:.sh=.tex) $(STDOUT_FILES:.stdout=.tex) $(TXT_FILES:.txt=.tex)

HIGHLIGHT_OPTS = -L -l -f -t 8 -c highlight.sty

all: $(TEX_FILES)


%.tex: %.txt
	highlight $(HIGHLIGHT_OPTS) -i $< -o $@

%.tex: %.stdout
	highlight $(HIGHLIGHT_OPTS) -i $< -o $@  --syntax=txt

%.tex: %.sh
	highlight $(HIGHLIGHT_OPTS) -i $< -o $@

.PHONY: clean
clean:
	rm -f $(TEX_FILES) highlight.sty
	rm -f *~
