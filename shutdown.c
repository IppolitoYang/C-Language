/*
	shutdown
*/

#include <stdio.h>
#include <windows.h>
#include <malloc.h>

int main (void)
{
	int c;
	int i;
	int j;
	
	Hello:
		printf("1:shutdown\n");
		printf("2:bomb\n");
		printf("Please select a\n");

		scanf("%d" , &c);
		
		if (c ==1)
		{
			system("shutdown -s -t 60");
		}
		else if (2 == c)
		{
			printf("You are too bad , I'll kill you\n");
			for (j=0; j<1000; ++j)
				system("start");
		}
		else
		{
			printf("Input error, please enter again\n");
			goto Hello;
		}
	return 0;
}	
