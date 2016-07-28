#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>

/* Params */ 
static char *whom = "world"; 
module_param(whom, charp, 0);

static int howmany = 5;
module_param(howmany, int, 0);

/* <MODULE>_init */
static int __init sample_init(void) {
	int i;

	pr_alert("This is sample_init() start.\n");

	for(i=0; i<howmany; i++) {
		pr_alert("(%d) Hello %s\n", i, whom);
	}

	pr_alert("This is sample_init() end.\n");

	return 0;
}

/* <MODULE>_exit */
static void __exit sample_exit(void) {
	pr_alert("This is sample_exit().\n");
}

module_init(sample_init);
module_exit(sample_exit);
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Sample module");
MODULE_AUTHOR("Green Leigh");
