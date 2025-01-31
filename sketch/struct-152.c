#include <stdio.h>
#include <stdint.h>

struct Fan {
	uint8_t id; 
	float k_p;
	uint32_t max_rpm;
};

int main() {
	struct Fan fan_1 = {.id = 1, .k_p = 0.5, .max_rpm = 4000};
	printf("Id: %d\nK Proportional: %f\nMaximum RPM: %d\n", fan_1.id, fan_1.k_p, fan_1.max_rpm);
	printf("Size: %ld\n", sizeof(struct Fan));
	printf("Size: %ld\n", sizeof(fan_1));
}
