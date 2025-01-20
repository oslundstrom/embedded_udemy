#include <stdio.h>

int main(void) {
	char * address;

	printf("%p\n", address);

	*address = 65;

	printf("%c\n", *address);
}
