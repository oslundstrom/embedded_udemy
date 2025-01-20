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
	uint8_t a, b;

	printf("Please enter two integers:\n");
	scanf("%hhd %hhd", &a, &b);

	printf("\n");

	printf("Binary\n");
	print_in_binary(a);
	print_in_binary(b);


	printf("\n");
	printf("&: %d %x\n", a & b, a & b);
	print_in_binary(a & b);
	printf("|: %d %x\n", a | b, a | b);
	print_in_binary(a | b);
	printf("^: %d %x\n", a ^ b, a ^ b);
	print_in_binary(a ^ b);
	printf("~: %d %x\n", ~ a, ~ a);
	print_in_binary(~ a);

}
