BUILDDIR = build

.PHONY: all clean

all: $(BUILDDIR)/Makefile
	git submodule update --init --recursive
	cd $(BUILDDIR) && make

$(BUILDDIR)/Makefile:
	cd $(BUILDDIR) && cmake ..

clean:
	rm -rf $(BUILDDIR)/*

setup:
	git submodule update --init --recursive
	sudo apt-get install libusb make cmake gcc-arm-none-eabi libnewlib-arm-none-eabi build-essential g++ libstdc++-arm-none-eabi-newlib