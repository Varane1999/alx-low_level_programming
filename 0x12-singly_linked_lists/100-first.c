#include<stdio.h>

/**
* myStartupFun - MyStartupFun() should be given the constructor attribute so
*   is executed before main()
*/
void myStartupFun(void) __attribute__((constructor));


/**
* myStartupFun - implementation of myStartupFun
*/
void myStartupFun(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
