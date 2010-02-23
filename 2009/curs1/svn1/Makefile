BASENAME = curs1_svn_andrei
PDF = $(addsuffix .pdf, $(BASENAME))
TEX = $(addsuffix .tex, $(BASENAME))
TMP_EXTENSIONS = .pdf .aux .log .nav .out .snm .toc
CLEAN_FILES = $(addprefix $(BASENAME), $(TMP_EXTENSIONS))

all: $(PDF)
$(PDF): $(TEX)
	pdflatex $<
	pdflatex $< # Twice, so TOC is also updated

.PHONY: clean
clean:
	rm -f $(CLEAN_FILES)
