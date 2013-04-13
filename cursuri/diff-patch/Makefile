BASENAME = diff-patch
CODEINPUTS = f_modificat.txt f_original.txt diff_no_params.patch diff_c.patch diff_u.patch
DEPTH = ../../
EXTRACLEAN = code/diff_no_params.patch code/diff_u.patch code/diff_c.patch
include $(DEPTH)/latex-beamer.mk

# extra rules
ORIGINAL_FILE = code/f_original.txt
MODIFIED_FILE = code/f_modificat.txt
UPDATED_FILE  = code/f_actualizat.txt
SOURCE_FILES := $(ORIGINAL_FILE) $(MODIFIED_FILE)
DIFF := diff --label=$(ORIGINAL_FILE) --label=$(MODIFIED_FILE)

code/diff_no_params.patch: $(SOURCE_FILES)
	$(DIFF)    $^ > $@ || true

code/diff_u.patch: $(SOURCE_FILES)
	$(DIFF) -u $^ > $@ || true

code/diff_c.patch: $(SOURCE_FILES)
	$(DIFF) -c $^ > $@ || true
