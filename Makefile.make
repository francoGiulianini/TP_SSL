CC = gcc
CFLAGS = -std=c11 -Weverything

comparadorDeTXTs.o: comparadorDeTXTs.c
	$(CC) $(CFLAGS) -c comparadorDeTXTs.c

comparadorDeTXTs: comparadorDeTXTs.o
	$(CC) $(CFLAGS) comparadorDeTXTs.o -o comparadorDeTXTs

.PHONY = all clean run test

all: conversionTest tablasDeConversion

run: tablasDeConversion
	./tablasDeConversion

test: conversionTest
	./conversionTest

tablasDeConversion: conversion.o

conversionTest: conversion.o

conversionTest.o: conversion.h

conversion.o: conversion.h

tablasDeConversion.o: conversion.h