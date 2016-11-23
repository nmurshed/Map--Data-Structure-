EXEC=runmap
MAIN=main
MAPPER=roadmap
CC=gcc
CFLAGS= -Wall -Wextra

all: $(EXEC)

runmap: $(MAIN).c $(MAPPER).c
	$(CC) $(CFLAGS) -o $(EXEC) $(MAIN).c $(MAPPER).c

clean:
	rm -f $(EXEC)
