.PHONY: all clean

OBJS= main.o

CFLAGS= -std=c11 -pedantic -Wall
CFLAGS+= -O1

MYLIB_PATH= ../binaryHeaplib

INCLUDES+= -I $(MYLIB_PATH)/include

all: example

clean:
	$(RM) -f $(OBJS)
	$(RM) -f $(OBJS:.o=.d)
	$(RM) -f example example.exe

vpath %.c  \
    src
vpath %.a  \
    $(MYLIB_PATH)

example: $(OBJS) -lbinaryHeaplib
	gcc -o $@  $^

%.o: %.c
	gcc -MD $(CFLAGS) $(INCLUDES) -c -o $@ $<

-include $(OBJS:.o=.d)