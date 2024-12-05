/**
 * Copyright (c) 2020 Raspberry Pi (Trading) Ltd.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#include <stdio.h>
#include "pico/stdlib.h"

int main() {
    stdio_init_all();
    while (true) {
        printf("Hello, world!\n");
        printf("Size of char: %u", sizeof(char));
        printf("Size of int: %u", sizeof(int));
        printf("Size of short: %u", sizeof(short));
        printf("Size of long: %u", sizeof(long));
        printf("Size of long long: %u", sizeof(long long));
        printf("Size of double: %u", sizeof(double));
        printf("Size of float: %u", sizeof(float));
        sleep_ms(5000);
    }
}