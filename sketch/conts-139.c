#include <stdio.h>
#include <stdint.h>

int main() {
	uint8_t const *p_data = (uint8_t*) 0x40000000;
	uint8_t const *const cp_data = (uint8_t*) 0x40000000;
}
