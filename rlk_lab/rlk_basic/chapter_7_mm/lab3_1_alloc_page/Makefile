
# modify right kernel PATH for your system
BASEINCLUDE ?= /home/haogroot/workspace/runninglinuxkernel_basic
#BASEINCLUDE ?= /lib/modules/`uname -r`/build

allocmm-objs := alloc_page_mm.o

obj-m	:=   alloc_page_mm.o
all :
	$(MAKE) -C $(BASEINCLUDE) M=$(PWD) modules;

clean:
	$(MAKE) -C $(BASEINCLUDE) SUBDIRS=$(PWD) clean;
	rm -f *.ko;


