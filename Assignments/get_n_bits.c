//Program to set the n bits at the given position//

#include<stdio.h>
int main()
{	
	unsigned int mask = 0;
	int a, n, result, pos;

	printf("Enter the number\n");
	scanf("%d", &a);
	printf("Enter the no of bits\n");
	scanf("%d", &n);
	printf("Enter the position\n");
	scanf("%d", &pos);

	mask = (~(~mask << n ) << pos );
	result = a & mask;
	if(result)
	{
		printf("The get bit is %d\n", result);
	}
	else
	{
		printf("The get bit is %d\n", result);
	}
	return 0;
}

