#include <linux/module.h>
#include <linux/kernel.h>
#include<linux/kthread.h>
#include<linux/sched.h>
#include<linux/time.h>

int fun2(void) {
	int a = 5, *p;
	printk("%s\n",__FUNCTION__);
	p = &a;
	printk("a = %d\n",*p);
	*p = *p + 5;
	printk("a = %d\n",*p);
	p = NULL;
	printk("a = %d\n",*p);
	return 0;
	
}
int fun1(void){
printk("%s\n",__FUNCTION__);
fun2();
return 0;
}
int init_module(void){
printk("inserting crash mod\n");
fun1();
return 0;
}
void cleanup_module(void)
{
printk(KERN_INFO "Goodbye\n");
}
MODULE_LICENSE("GPL");
