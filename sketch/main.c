#include <stdio.h>

#define MAXBUFFER 100

int main(void)
{
	int ints[MAXBUFFER];
	int i = 0;
	while (1) {
		ints[i] = getchar();
		if (ints[i] == '\n') {
			ints[i] = '\0';
			i = 0;
			while (ints[i]) {
				printf("%d-", ints[i]);
				i++;
			}
			printf("\b \n");
			return 0;
		}
		i++;
	}

}
