BINARY=avl
LIB=ar
LIBFLAGS=rcs
LDFLAGS=-L./lib
CC=gcc
CFLAGS= -g -Wall -I./include 
LIBS = 

SRCS := $(wildcard *.c)
OBJS := $(patsubst %.c,%.o,$(SRCS))

all: $(BINARY)

$(BINARY): $(OBJS)
	$(CC) $(CFLAGS) $(LDFLAGS)  -o $@ $(OBJS) $(LIBS)

clean:
	rm -f $(OBJS) $(BINARY)
