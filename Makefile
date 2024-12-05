# Directory to create temporary build files in
BUILDDIR = build
#
# Path to the SDK parts we need
SDK_PATH = pico-sdk
export PICO_SDK_PATH = $(SDK_PATH)

# SRC Files
# pico-sdk/src/rp2_common/hardware_pio/pio.c
SRCS = \
	main.c \

OBJS = $(SRCS:.c=.o)

INCLUDE = include

# Compilation related variables
TOOLCHAIN = arm-none-eabi-
CFLAGS ?= -mcpu=cortex-m0plus -O3 \
		  -c \
		 -nostartfiles \
		 -mthumb \

LDFLAGS ?= -T link.ld  -nostdlib -O3

# Utilities path
UTILS = utils

PIOASM = $(SDK_PATH)/tools/pioasm/pioasm
	
%.o: %.c
	mkdir -p $(shell dirname $@)
	$(TOOLCHAIN)gcc $(CFLAGS) -c $< -o $@

$(BUILDDIR)/$(BOOT2).uf2: $(BUILDDIR)/$(BOOT2).bin
	python3 $(UTILS)/uf2/utils/uf2conv.py -b 0x10000000 -f 0xe48bff56 -c $(BUILDDIR)/$(BOOT2).bin -o $@

clean:
	rm -rf $(BUILDDIR) $(BOOT2).uf2

dependencies: | $(SDK_PATH) $(SDK_PATH)/pico_sdk_init.cmake
	
pico_sdk_init.cmake: $(SDK_PATH)
	cp $(SDK_PATH)/pico_sdk_init.cmake $@

$(SDK_PATH):
	git -C . clone https://github.com/raspberrypi/pico-sdk.git

setup: dependencies
	sudo apt update
	sudo apt install make cmake gcc-arm-none-eabi libnewlib-arm-none-eabi build-essential g++ libstdc++-arm-none-eabi-newlib
