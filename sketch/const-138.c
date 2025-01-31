#include <stdio.h>
#include <stdint.h>


int main() {
	uint8_t const data1 = 3;
	printf("Data: %d\n", data1);

	uint8_t *ptr1 = &data1;
	*ptr1 = 32;
}
