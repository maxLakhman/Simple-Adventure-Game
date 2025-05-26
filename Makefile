OS := $(shell uname -s)

ifeq ($(OS), Darwin)
  INCLUDE_PATH := /opt/homebrew/Cellar/criterion/2.4.1_1/include
  LIB_PATH := /opt/homebrew/Cellar/criterion/2.4.1_1/lib
  CC = gcc-12
endif
ifeq ($(OS), Linux)
  INCLUDE_PATH := /util/criterion/include
  LIB_PATH := /util/criterion/lib/x86_64-linux-gnu
  CC = gcc
endif

# Compiler and target
CC = gcc
TARGET = adventure

# Compiler flags
CFLAGS = -Wall -std=c11 -ggdb
LDFLAGS = -lncurses

# Source and object files
SRC = main.c story.c inventory.c story_ash.c story_cat.c story_utils.c
OBJ = $(SRC:.c=.o)

# Default build target
all: $(TARGET)

# Build the final executable
$(TARGET): $(OBJ)
	$(CC) $(OBJ) -o $(TARGET) $(LDFLAGS)

# Compile .c to .o
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Clean up build files
.PHONY: clean
clean:
	rm -f *.o $(TARGET) *~ *.c# *.gc?? *#  gmon.out analyze.txt sandbox-gmon.* *.dSYM


