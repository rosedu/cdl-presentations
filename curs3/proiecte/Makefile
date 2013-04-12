DIRS := `find . -maxdepth 1 -mindepth 1 -type d`
all:
	@for i in $(DIRS); do\
		echo -n "Building rule $@ in $$i ...   ";			\
		make all -C $$i > /dev/null 2> /dev/null && cp $$i/*.pdf ./;	\
		if [ $$? -eq 0 ] ; then						\
			echo "OK";						\
		else								\
			echo "Failed";						\
		fi;								\
	done;
clean:
	@for i in $(DIRS); do\
		echo -n "Building rule $@ in $$i ...   ";			\
		make clean -C $$i > /dev/null 2> /dev/null ;			\
		if [ $$? -eq 0 ] ; then						\
			echo "OK";						\
		else								\
			echo "Failed";						\
		fi;								\
	done;
	rm -f *.pdf;