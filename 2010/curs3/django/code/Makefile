TEXFILES = template.tex model.tex view.tex 
HIGHLIGHT_OPTS = -L -l -f -t 4 -c highlight.sty

all: $(TEXFILES)

template.tex: template.html
	highlight $(HIGHLIGHT_OPTS) -i $< -o $@ --syntax html

model.tex: model.py
	highlight $(HIGHLIGHT_OPTS) -i $< -o $@

view.tex: view.py
	highlight $(HIGHLIGHT_OPTS) -i $< -o $@

.PHONY: clean
clean:
	rm -f $(TEXFILES) highlight.sty
