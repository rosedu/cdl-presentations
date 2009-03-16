BASENAME = makefile
PDF = $(addsuffix .pdf, $(BASENAME))
TEX = $(addsuffix .tex, $(BASENAME))
TMP_EXTENSIONS = .pdf .aux .log .nav .out .snm .toc
CLEAN_FILES = $(addprefix $(BASENAME), $(TMP_EXTENSIONS))

all: $(PDF)
$(PDF): $(TEX) highlight/Makefile
	cd highlight && make
	pdflatex $<
	pdflatex $< # Twice, so TOC is also updated

.PHONY: clean
clean:
	cd highlight && make clean
	rm -f $(CLEAN_FILES)
