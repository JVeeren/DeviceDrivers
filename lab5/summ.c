#include<linux/module.h>
#include<linux/kernel.h>
#include<linux/kthread.h>
#include<linux/sched.h>
#include<linux/time.h>

int init_module(void)
{
int p;
int q = 5;
int r = 3;
p = q + r;

printk(KERN_INFO "The sum of the numbers : %d \n",p);
return 0;
}

void cleanup_module(void){
printk(KERN_INFO "Goodbye\n");
}
