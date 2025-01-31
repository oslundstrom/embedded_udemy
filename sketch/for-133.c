#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	if (! (argc == 2)) {
		fprintf(stderr, "Usage: %s HEIGHT\n", argv[0]);
		exit(1);
	}

	uint32_t height = atoi(argv[1]);

	for (uint32_t i = 1; i <= height; i++) {
		for (uint32_t j = i; j > 0; j--) {
			printf("%4d ", j);
		}
		printf("\n");
	}
}

