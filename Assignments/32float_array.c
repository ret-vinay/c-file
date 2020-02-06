//program for sorting the float array without modifying or copying the array elements//

#include<stdio.h>

//Function definition for sorting float array//
void float_array( float *ptr, int size )
{

	//Declare the variables//
	int i, j;
	float smallest = -128.0f;

	//Outer loop to check for each elements with the smallest value//
	for ( i = 0; i < size; i++)
	{

		//Inner loop is to search the value in array//
		float largest = 127.0f;
		for ( j = 0; j < size; j++)
		{
			if ((smallest < *(ptr + j)) && (*(ptr + j) < largest ))
			{
				largest = *(ptr + j);
			}
		}
		printf("%f\t", largest);      
		smallest = largest;  /* Now the largest value is smallest value*/
	}
	printf("\n");
}

//Main function goes from here//
int main()
{
	//Declare the variables//
	int i, n, size;

	//read the size of an array//
	printf("Enter the size of array\n");
	scanf("%d", &n);

	size = n - 1;
	float a[n];

	//read the elemets from user//
	printf("Enter the lements of array\n");
	for ( i = 0; i <= size; i++)
	{
		scanf("%f", &a[i]);
	}

	float_array(a, n);    /*Function call for sorting float array*/
}
