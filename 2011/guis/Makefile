.PHONY: all

TARGET = gui.pdf
STYLES = -s slides.style -s dejavu

all: $(TARGET)

%.pdf: %.rst
	rst2pdf $^ -b1 $(STYLES) -o $@

clean:
	$(RM) $(TARGET)

