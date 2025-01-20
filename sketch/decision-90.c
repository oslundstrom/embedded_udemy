#include <stdio.h>
#include <stdint.h>

#define VOTING_AGE 18

int main(void) {
	uint8_t age;
	printf("Please enter you age:\n");
	scanf("%hhd", &age);
	if (age >= VOTING_AGE) {
		printf("You are allowed to vote since %hhd years\n", age-VOTING_AGE);
	} else {
		printf("You are not allowed to vote for another %d years\n", VOTING_AGE-age);
	}
}


