//Program to swap set of numbers//

#include<stdio.h>
int main()
{
	//Declaring the variables//
	int i, j, k, size, temp, n, res = 0;
	double med;

	//Read the size of array from the user//
	printf("Enter the size of array \n");
	scanf("%d", &size);
	int a[size];

	if ( size < 1 || size > 100 )
	{
		printf("Error: The entered size is not valid\n");
		return 1;
	}

	//Read the elements from the user//
	printf("Enter the elements\n");
	for ( i  = 0; i < size; i++ )
	{
		scanf("%d", &a[i]);
	}

	//Sort the elemets in ascending order//

	for ( i = 0; i < size; i++ )
	{
		for ( j = i + 1; j < size; j++)
		{
			if ( a[i] > a[j] )
			{
				temp = a[j];
				a[j] = a[i];
				a[i] = temp;
			}
		}
	}

	//Print the sorted elements//
	printf("Sorted elements are \n");
	for ( i = 0; i < size; i++ )
	{
		printf("%d\t", a[i]);
	}
	printf("\n");

	for ( k = 0; k < size; k++ )
	{
		if ( res < a[k] )
		{
			res = a[k];
			printf("%d\t", res);
		}
	}
	printf("\n");
	return 0;
}
