DIST := diff_u.tex diff_c.tex diff_no_params.tex
TEX_FILES   := $(DIST)
PATCH_FILES := $(patsubst %.tex, %.patch, $(DIST))
HIGHLIGHT_OPTS = -L -l -f -t 8 -c highlight.sty

ORIGINAL_FILE = f_original
MODIFIED_FILE = f_modificat
SOURCE_FILES := $(ORIGINAL_FILE) $(MODIFIED_FILE)

all: $(TEX_FILES)

%.tex: %.patch
	highlight $(HIGHLIGHT_OPTS) -i $< -o $@

# make diff files
diff_u.patch: $(SOURCE_FILES)
	diff -u $^ > $@ || true
diff_c.patch: $(SOURCE_FILES)
	diff -c $^ > $@ || true
diff_no_params.patch: $(SOURCE_FILES)
	diff    $^ > $@ || true


.PHONY: clean
clean:
	rm -f $(TEX_FILES) $(PATCH_FILES) highlight.sty
	rm -f *~