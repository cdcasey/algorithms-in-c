# Variables
CC = gcc
CFLAGS = -Wall -Wextra -g

# The target binary name
TARGET = stack_demo

# Build rule
all: main.c
	$(CC) $(CFLAGS) -o $(TARGET) main.c

# Clean rule to remove the binary
clean:
	rm -f $(TARGET)
