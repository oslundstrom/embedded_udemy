SRC := $(wildcard *.c)
BINS := $(SRC:.c=)

.PHONY: all

all: $(BINS)

%: %.c
	gcc $< -o $@

run: main
	./$<

clean:
	rm $(BINS)
