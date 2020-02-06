//Program to print in binary form//

#include<stdio.h>
int main()
{
	//declaring the variables//
	int a;
	unsigned int mask;

	//Read the input from from user//
	printf("Enter the value to print in binary\n");
	scanf("%d", &a);

	//Loop used to check all bits to print //
	for(mask = 1 << (sizeof(int) * 8 - 1) ; mask; mask >>=1)
	{
		if( a & mask)
		{ 
			printf("1");
		}
		else 
		{
			printf("0");
		}
	}
	printf("\n");

	//For 2's complement//
	a = ~a + 1;

	//Loop to print all bits//
	for(mask = 1 << (sizeof(int) * 8 - 1) ; mask; mask >>=1)
	{
		if ( a & mask)
		{
			printf("1");
		}
		else
		{
			printf("0");
		}
	}
	printf("\n");
	return 0;
}

