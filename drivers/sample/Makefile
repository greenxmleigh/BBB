ifneq ($(KERNELRELEASE),)
obj-m := sample.o
else
KDIR := /usr/src/kernels/2.6.32-642.3.1.el6.x86_64

all:
	$(MAKE) -C $(KDIR) M=$$PWD
endif
