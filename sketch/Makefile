SRC := $(wildcard *.c)
BINS := $(SRC:.c=)

.PHONY: all

all: $(BINS)

%: %.c
	gcc $< -o $@ -g -lm

run: main
	./$<

clean:
	rm $(BINS)
