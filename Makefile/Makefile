CC = gcc
CFLAGS = -std=c11
OBJECTS = TablasDeConversion.o ConversionTest.o Conversion.o

.PHONY = all clean run test

all: ConversionTest TablasDeConversion

run: TablasDeConversion
	./TablasDeConversion

test: ConversionTest
	./ConversionTest

TablasDeConversion: Conversion.o

ConversionTest: Conversion.o

ConversionTest.o: Conversion.h
	$(CC) $(CFLAGS) -c ConversionTest.c -o ConversionTest.o

Conversion.o: Conversion.h
	$(CC) $(CFLAGS) -c Conversion.c -o Conversion.o

TablasDeConversion.o: Conversion.h
	$(CC) $(CFLAGS) -c TablasDeConversion.c -o TablasDeConversion.o

clean:
	-rm TablasDeConversion ConversionTest *.o