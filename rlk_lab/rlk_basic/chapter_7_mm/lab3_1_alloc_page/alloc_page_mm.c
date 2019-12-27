#include <linux/module.h>
#include <linux/slab.h>
#include <linux/init.h>
#include <linux/vmalloc.h>
#include <linux/mm.h>
#include <../arch/arm/include/asm/memory.h>



static int __init my_init(void)
{

	/* try alloc_pages() */
	struct page *page_memory;
        page_memory = alloc_page(GFP_KERNEL);
	pr_info("flags = %lu", page_memory->flags);

	unsigned long *addr;
        addr = page_address(page_memory);
	pr_info("page virtual address = %x\n", addr);
	pr_info("page physical address= 0x%x\n", __pa(addr));
	pr_info("PAGE_OFFSET = %x, PHYS_OFFSET = %x \n", PAGE_OFFSET, PHYS_OFFSET);
	return 0;
}

static void __exit my_exit(void)
{
	pr_info("Module exit\n");
}

module_init(my_init);
module_exit(my_exit);

MODULE_AUTHOR("haogroot");
MODULE_LICENSE("GPL v2");
