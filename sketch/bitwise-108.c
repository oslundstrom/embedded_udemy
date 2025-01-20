#include <string.h>
#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>

void convert_to_binary(uint8_t a, char * string, uint8_t i) {
	if (i > 0)
		convert_to_binary(a / 2, string, --i);
	switch (a%2) {
		case 0:
			strcat(string, "0");
			break;
		case 1:
			strcat(string, "1");
			break;
	}
}

void print_in_binary(uint8_t a) {
	char string[128] = "";
	convert_to_binary(a, string, 7);
	printf("%s\n", string);
}

int main(void) {
	uint32_t entered, modified;

	printf("Enter a number to print it with bits 4, 5 and 6 cleared\n");
	while (scanf("%d", &entered) != 0) {
		print_in_binary(entered);
		modified = entered & ~ 0b111000;
		print_in_binary(modified);
		printf("%d\n", modified);

		// entered = getchar(); // clear \n
	}
	return 0;
}

