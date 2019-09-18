CFLAGS= -std=c11 -pedantic -Wall
CFLAGS+= -O1
OBJS= binaryHeap.o
INCLUDES+= -I ./include

vpath %.h include src
vpath %.c src

MYLIBNAME= libbinaryHeaplib.a

.PHONY: all clean

all: $(MYLIBNAME)

$(MYLIBNAME): $(OBJS)
	$(AR) -rsc $@ $^

%.o: %.c
	gcc -MD $(CFLAGS) $(INCLUDES) -c -o $@ $<

-include $(OBJS:.o=.d)

clean:
	$(RM) -f $(OBJS)
	$(RM) -f $(OBJS:.o=.d)
	$(RM) -f $(MYLIBNAME)