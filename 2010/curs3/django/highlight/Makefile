TEXFILES = model.tex view.tex template.tex
HIGHLIGHT_OPTS = -L -f -t 8 -c highlight.sty

all: $(TEXFILES)

model.tex: model.py
	highlight $(HIGHLIGHT_OPTS) -i $< -o $@

view.tex: view.py
	highlight $(HIGHLIGHT_OPTS) -i $< -o $@

template.tex: template.html
	highlight $(HIGHLIGHT_OPTS) -i $< -o $@

.PHONY: clean
clean:
	rm -f $(TEXFILES) highlight.sty

