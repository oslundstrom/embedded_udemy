#include <stdint.h>
#include <stdio.h>

int main(void) {
	int32_t a, b;
	printf("Enter two numbers separated by whitespace\n");
	scanf("%d %d", &a, &b);
	if (a == b)
		printf("The numbers are equal, both are %d\n", a);
	else if (a > b)
		printf("The first number (%d) is bigger than %d\n", a, b);
	else if (b > a)
		printf("The second number (%d) is bigger than %d\n", b, a);
}
