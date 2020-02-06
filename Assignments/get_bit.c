
//Program to given bit is set//

#include<stdio.h>
int main()
{	
	unsigned int mask = 0;
	int a, l, result;

	printf("Enter the number\n");
	scanf("%d", &a);
	printf("Enter the location\n");
	scanf("%d", &l);

	mask = ~(~(mask) << l);
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

