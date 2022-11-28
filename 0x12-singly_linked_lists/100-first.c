#include <stdio.h>

void run_first(void) __attribute__ ((constructor));

/**
  * run_first - runs before the main funtion
  *
  */
void run_first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
