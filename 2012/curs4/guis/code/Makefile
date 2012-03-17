.PHONY: all clean

TEXFILES = mainloop.tex mainwindow.tex closewindow.tex
HIGHLIGHT_OPTS = --out-format=latex -l -f -t 8 -c highlight.sty

all: $(TEXFILES)

%.tex: %.py
	highlight -S python $(HIGHLIGHT_OPTS) -i $< -o $@

clean:
	rm -f $(TEXFILES) highlight.sty
