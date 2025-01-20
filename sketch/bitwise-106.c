#include <stdint.h>
#include <stdio.h>

int main(void) {
	uint32_t entered;

	printf("Enter a number to determine if it is odd or even, enter a letter to exit\n");
	while (scanf("%d", &entered) != 0) {
		if (entered & 1)
			printf("Odd\n");
		else
			printf("Even\n");
		// entered = getchar(); // clear \n
	}
	return 0;
}


