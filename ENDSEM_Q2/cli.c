#include<linux/module.h>
#include<linux/kernel.h>

int num = 0;
char *name="Veeren";

module_param(num, int, S_IRUGO);//module_param(name,type,permission);
module_param(name, charp, S_IRUGO);//permission is for sysfs entry . here S_IRUGO is only read by all users.

int init_module(void)
{

	printk("Inside %s\n",__FUNCTION__);
	printk(KERN_INFO "The number entered is %d\n",num);
	printk(KERN_INFO "The name entered is %s\n",name);
	return 0;
}

void cleanup_module(void){
printk(KERN_INFO "Goodbye\n");
}
