
//Program to delete duplicates//

#include<stdio.h>
int main()
{
	//Declaring the variables//
	int i, j, l, size, temp, n, res = 0;
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
			for ( l = j; l < size; l++ )
			{
				if ( res < a[i] )
				{
					res = a[i];
					printf("%d\t", res);
				}
			}
		}
	}


	printf("\n");
	return 0;
}
