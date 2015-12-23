CC=gcc
CFLAGS=-Wall

SRC=.
BIN=.

TEST_SRC=./tests
TEST_BIN=./tests

MODULES=fqbuffer.c fqfile.c
MODULE_LIST=$(addprefix $(SRC)/, $(MODULES))

EXEC=fqtools


.PHONY: all tests clean fqtools

fqtools:
	$(CC) $(CFLAGS) -o$(BIN)/$(EXEC) -lz $(MODULE_LIST) $(SRC)/fqtools.c

tests:
	$(CC) $(CFLAGS) -o $(TEST_BIN)/test-fqbuffer -I$(SRC) -I$(TEST_SRC) $(MODULE_LIST) -lz $(TEST_SRC)/test-fqbuffer.c

all: fqtools tests

clean:
	-rm fqtools
	-rm $(TEST_BIN)/test-fqbuffer
