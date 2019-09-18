.PHONY: all clean

OBJS= test.o

CFLAGS= -std=c11 -pedantic -Wall
CFLAGS+= -O1

MYLIB_PATH= ../binaryHeaplib

INCLUDES+= -I $(MYLIB_PATH)/include

all: test

clean:
	$(RM) -f $(OBJS)
	$(RM) -f $(OBJS:.o=.d)
	$(RM) -f test test.exe


vpath %.c  \
    src
vpath %.a  \
    $(MYLIB_PATH)

test: $(OBJS) -lbinaryHeaplib
	gcc -o $@  $^

%.o: %.c
	gcc -MD $(CFLAGS) $(INCLUDES) -c -o $@ $<

-include $(OBJS:.o=.d)