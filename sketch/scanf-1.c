#include <stdio.h>

int main(void)
{
	float a, b, c, avg;
	printf("Enter three space seperated numbers and press enter to get average\n>");
	scanf("%f %f %f", &a, &b, &c);
	avg = (a + b + c) / 3;
	printf("Average: %f\n", avg);
}
