

//Program to set the n bits at the given position//

#include<stdio.h>
int main()
{	
	unsigned int mask = 0;
	int a, l, result, val;

	printf("Enter the number\n");
	scanf("%d", &a);
	printf("Enter the location\n");
	scanf("%d", &l);
	printf("Enter the value\n");
	scanf("%d", &val);

	mask = ~((~mask) << val) << l;
	result = a | mask;
	if(result)
	{
		printf("The set bit is %d\n", result);
	}
	else
	{
		printf("The set bit is %d\n", result);
	}
	return 0;
}

