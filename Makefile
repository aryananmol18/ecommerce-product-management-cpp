# Makefile for eCommerce Product Management

# Build commands

CC = g++
CFLAGS = -g -Wall

all: build

build: main.o product.o
	$(CC) $(CFLAGS) -o ecommerce main.o product.o

main.o: main.cpp
	$(CC) $(CFLAGS) -c main.cpp

product.o: product.cpp
	$(CC) $(CFLAGS) -c product.cpp

clean:
	rm -f *.o ecommerce
