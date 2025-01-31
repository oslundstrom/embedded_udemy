#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>


typedef struct {
	uint8_t crc;
	uint8_t status;
	uint16_t payload;
	uint8_t bat;
	uint8_t sensor;
	uint8_t long_addr;
	uint8_t short_addr;
	uint8_t addr_mode;
}packet_t;

void parse_packet(uint32_t const input, packet_t * const packet) {
	packet->addr_mode = (uint8_t)(input >> 31);
	packet->short_addr = (uint8_t)(input >> 29 & 0x1);
	packet->long_addr = (uint8_t)(input >> 21 & 0xFF);
	packet->sensor = (uint8_t)(input >> 18 & 0x7);
	packet->bat = (uint8_t)(input >> 15 & 0x7);
	packet->payload = (uint16_t)(input >> 3 & 0xFFF);
	packet->status = (uint8_t)(input >> 2 & 0x1);
	packet->crc = (uint8_t)(input & 0x3);
}

void print_packet(packet_t *const packet) {
	printf("CRC: %x\n", packet->crc);
	printf("Status: %x\n", packet->status);
	printf("Payload: %x\n", packet->payload);
	printf("Bat: %x\n", packet->bat);
	printf("Sensor: %x\n", packet->sensor);
	printf("Long address: %x\n", packet->long_addr);
	printf("Short address: %x\n", packet->short_addr);
	printf("Address mode is: %x\n", packet->addr_mode);
}

int main(uint8_t argc, char *argv[]) {
	if (argc != 2) {
		fprintf(stderr, "Usage: %s 0xFFFFFFFF\n", argv[0]);
		return 2;
	}
	char *input = argv[1];
	if ((input[0] == '0') && (input[1] == 'x')) {
		input += 2;
	} else {
		fprintf(stderr, "Input should begin with 0x\n");
		return 2;
	}

	if (strlen(input) != 8) {
		fprintf(stderr, "Hex value input should contain 8 hex values, not %ld\n", strlen(input));
		return 2;
	}

	char *endptr;
	uint32_t packet_input = (uint32_t)strtol(input, &endptr, 16);
	if (*endptr != '\0') {
		fprintf(stderr, "Input too long\n");
		return 1;
	}
	packet_t packet;
	parse_packet(packet_input, &packet);
	print_packet(&packet);
	printf("\nSize of struct is %ld\n", sizeof(packet));
	return 0;
}
