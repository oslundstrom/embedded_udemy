BUILDDIR = build

.PHONY: all
all: $(BUILDDIR)/hello_world.uf2

$(BUILDDIR)/Makefile:
	cd $(BUILDDIR) && cmake ..

$(BUILDDIR)/hello_world.uf2:
	cd $(BUILDDIR) && make
