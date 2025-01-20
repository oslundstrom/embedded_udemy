#include <stdio.h>

int main(void) {
	float income, payable;

	printf("Enter your income\n");
	scanf("%f", &income);

	if (income <= 9525)
		payable = 0;
	else if (income <= 38700)
		payable = income * 12 / 100;
	else if (income <= 82500)
		payable = income * 22 / 100;
	else 
		payable = income * 32 / 100 + 1000;

	printf("Your tax payable is %f\n", payable);
}

		
	
