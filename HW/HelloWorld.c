/* HelloWorld.c -First kernel module made by Adelshin E.R. 3O-414B
*/

#include <linux/module.h>
#include <linux/kernel.h>

int init_module(void)
{
    printk("<1>Zdravstvuyte!!\n");

    return 0;
}


void cleanup_module(void)
{
     printk(KERN_ALERT "Dosvidanya!!\n");
}
