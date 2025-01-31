#include<stdio.h>
#include<stdint.h>

struct DataSet
{
	char data1;
	int data2;
	char data3;
	short data4;
};

int main(void) {
	struct DataSet data;
	data.data1 = 0x11;
	data.data2 = 0xFFFFFFFF;
	data.data3 = 0x22;
	data.data4 = 0xBBCE;

	uint8_t *ptr;

	ptr = (uint8_t*)&data;

	uint32_t total_size = sizeof(struct DataSet);

	printf("Memory-address Contents\n");

	for (uint32_t i = 0; i < total_size; i++) {
		printf("%p %X\n", ptr, *ptr);
		ptr++;
	};
}

