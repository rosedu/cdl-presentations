

.PHONY:all clean
all clean:
	@for i in curs*/*; do				\
		echo -n "Building  $$i ...   ";		\
		make $@ -C $$i > /dev/null 2> /dev/null;\
		if [ $$? -eq 0 ] ; then			\
			echo "OK";			\
		else					\
			echo "Failed";			\
		fi;					\
	done;
