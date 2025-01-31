#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

int main(int argc, char * argv[])
{
	if (! (argc == 3)) {
		fprintf(stderr, "Usage: %s FIRST LAST\n", argv[0]);
		exit(1);
	}

	uint32_t number = atoi(argv[1]);
	uint32_t last = atoi(argv[2]);
	if (last < number) {
		fprintf(stderr, "Numbers must be ascending\n");
		exit(1);
	}

	while (number <= last) {
		printf("%4d\n", number++);
	}
}
