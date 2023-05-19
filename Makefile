CC := gcc
#CFLAGS := 
DEST := ./build

random: rand.c
	mkdir -p $(DEST)
	$(CC) rand.c -o $(DEST)/rand