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

	printf("Enter a number to print the number with bit 4 and 7 set\n");
	while (scanf("%d", &entered) != 0) {
		print_in_binary(entered);
		if (entered & 1)
			printf("Odd\n");
		else
			printf("Even\n");
		modified = entered | 0b100 | 0b1000000;
		print_in_binary(modified);
		printf("%d\n", modified);

		// entered = getchar(); // clear \n
	}
	return 0;
}

