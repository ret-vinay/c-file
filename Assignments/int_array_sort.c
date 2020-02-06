#include<stdio.h>
int main()
{
	int j, n, size, temp = 99;
	int i, smallest = 127, largest = -128;
	printf("Enter the size of array\n");
	scanf("%d", &n);

	size = n - 1;
	float a[n];

	printf("Enter the lements of array\n");
	for ( i = 0; i <= size; i++)
	{
		scanf("%f", &a[i]);
	}

	for ( i = 0; i < n ; i++)
	{
		if ( smallest > a[i])
		{
			smallest = a[i];
		}
		if ( largest < a[i] )
		{
			largest = a[i];
		}
	}
	printf("The smallest value is %d\n", smallest);
	printf("the largest value is %d\n", largest);
	printf("%d\t", smallest);

	for ( i = 0; i < n - 1; i++)
	{
		for ( j = 0; j < n; j++)
		{
			if ( a[j] > smallest && a[j] < largest && temp > a[j] )
			{
				temp = a[j];
			}
		}
			printf("%d\t", temp);
			smallest = temp;
			temp = largest;
	}
	printf("\n");
}

