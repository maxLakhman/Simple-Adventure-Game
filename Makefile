CC = gcc
CFLAGS = `pkg-config --cflags gtk4`
LIBS = `pkg-config --libs gtk4`
TARGET = adventure

all:
	$(CC) main.c -o $(TARGET) $(CFLAGS) $(LIBS)