#include <stdio.h>

int main(void) {
	double charge;
	double ec = 1.60217646e-19; // coulomb
    long long int n_electrons;

	printf("Enter a charge to convert to number of electrons:\n");
	scanf("%lf", &charge);

	n_electrons = (long long int)(charge / ec);

	printf("\nNumber of electrons: %lld\n", n_electrons);
}

