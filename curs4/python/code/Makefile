TEXFILES = if.tex fun.tex class_light.tex md_impl.tex md_user.tex dict.tex lists.tex tuple.tex \
	lists2.tex list_comp.tex main.tex string1.tex string2.tex file_io.tex tabel_io.tex param_cmdline.tex
PATCH_FILES := $(patsubst %.tex, %.py, $(TEXFILES))
HIGHLIGHT_OPTS = -L -l -f -t 8 -c highlight.sty

all: $(TEXFILES)

%.tex: %.py
	highlight $(HIGHLIGHT_OPTS) -i $< -o $@

.PHONY: clean
clean:
	rm -f $(TEXFILES) highlight.sty
	rm -f *~ *.pyc