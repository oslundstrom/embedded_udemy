BUILDDIR = build

.PHONY: all clean

all: $(BUILDDIR)/Makefile
	git submodule update --init --recursive
	cd $(BUILDDIR) && make

$(BUILDDIR)/Makefile: | $(BUILDDIR)
	cd $(BUILDDIR) && cmake ..

$(BUILDDIR):
	mkdir -p $@

clean:
	rm -rf $(BUILDDIR)/*

setup:
	git submodule update --init --recursive
	sudo apt-get install make cmake gcc-arm-none-eabi libnewlib-arm-none-eabi build-essential g++ libstdc++-arm-none-eabi-newlib
