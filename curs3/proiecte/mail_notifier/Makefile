DIST = mail_notifier
TRASHEXT = .pdf .aux .log .nav .out .snm .toc
TRASH = $(addprefix $(DIST), $(TRASHEXT))

all: $(DIST).pdf
$(DIST).pdf: $(DIST).tex
	pdflatex $<
	pdflatex $< # Twice, so TOC is also updated

.PHONY: clean
clean:
	rm -f $(TRASH)
