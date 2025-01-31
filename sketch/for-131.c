#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	if (argc != 2) {
		printf("Usage: %s LAST\n", argv[0]);
		exit(1);
	}

	uint32_t last = atoi(argv[1]);

	for (uint32_t i = 0; i <= last; i++)
		if (i % 2 == 0)
			printf("%4d\t", i);

	printf("\n");
}

