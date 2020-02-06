//Program to check median of given set of numbers//

#include<stdio.h>
int main()
{
	//Declaring the variables//
	int i, j, size, temp, n;
	double med;

	//Read the size of array from the user//
	printf("Enter the size of array \n");
	scanf("%d", &size);
	int a[size];

	//Checking the condition for valid size of array//
	if ( size < 1 || size > 100)
	{
		printf("ERROR: entered number is not valid\n");
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
			{
				if ( a[i] > a[j] )
				{
					temp = a[j]; 
					a[j] = a[i];
					a[i] = temp;
				}
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

	//finding the median of elements for even and odd//

	//For Even number of elements//
	if ( size % 2 == 0)
	{
		n  = ( size / 2);
		med = ( a[n] + a [n -1] ) ;
		med = med / 2;
		printf("The median for even is %f\n", med);
	}

	//for Odd number of elemets//
	else
	{
		n = (size - 1 ) / 2;
		med = a [n];
		printf("The median for odd number is %f\n", med);
	}
	printf("\n");
	return 0;
}
