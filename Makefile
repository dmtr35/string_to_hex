CC = gcc
CFLAGS = -Wall -g

 
 
all: 
	$(CC) $(CFLAGS) -c main.c -o main.o
	$(CC) $(CFLAGS) -c str_to_hex.c -o str_to_hex.o
	$(CC) $(CFLAGS) -c hex_to_str.c -o hex_to_str.o

	$(CC) $(CFLAGS) main.o str_to_hex.o hex_to_str.o -o str_to_hex
	@rm main.o str_to_hex.o hex_to_str.o