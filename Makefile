CC=gcc
CFLAGS=-Wall

all: self

self:
	$(CC) $(CFLAGS) self.c -o self
