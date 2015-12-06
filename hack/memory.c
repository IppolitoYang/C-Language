/*
	memory leak
*/

#include <stdio.h>
#include <malloc.h>

int main (void)

{
	while (1)
	{
		int *p = (int *)malloc(100000000000000);
	}
	return 0;
}
