#include <stdio.h>

void printBefore (void) __attribute__ ((constructor)); 

void printBefore(void)
{ 
	printf ("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
