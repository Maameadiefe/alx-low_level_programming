#include <stdio.h>

/**
 * premain -Thus will print a sentence before the main
 */
void __attribute__((constructor))premain()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

