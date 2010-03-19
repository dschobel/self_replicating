CC=g++
CFLAGS=-Wall

all: self
	./self

clean:
	rm self

self:
	$(CC) $(CFLAGS) self.c -o self
