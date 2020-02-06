//Program to swap set of numbers//

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
	j = size;
	for ( i = 0; i < size / 2; i++ )
	{
		temp = a[j-1]; 
		a[j-1] = a[i];
		a[i] = temp;
		j--;
	}

	//Print the sorted elements//
	printf("Sorted elements are \n");
	for ( i = 0; i < size; i++ )
	{
		printf("%d\t", a[i]);
	}
	printf("\n");
	return 0;
}
