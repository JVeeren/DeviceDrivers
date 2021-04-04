obj-m := crash.o
crash-objs :=crashmod.o
CFLAGS += -O0
default:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) modules
clean:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) clean

