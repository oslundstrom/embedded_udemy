#include <stdio.h>

int main(void) {
	char hej = 100;
	printf("Original var: %c\n", hej);
	printf("Address: %p\n", &hej);
	char *address = &hej;
	char new_hej = *address;
	printf("Read var: %c\n", new_hej);
	*address = 65;
	printf("Original var: %c\n", hej);
}
