#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdint.h>

int main(int argc, char **argv)
{
	uint8_t i, max;
	if (argc < 2)
		max = 10;
	else
		max = atoi(argv[1]);
	i = 0;

	while (i <= max) {
		printf("%d\n", i++);
	}
}
