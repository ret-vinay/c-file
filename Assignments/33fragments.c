/********************************************************************************
Program for fragments
*******************************************************************************/


#include<stdio.h>
#include<stdlib.h>

//The function definition for fragments 
void my_fragments(double *a, double n)
{
	int i;
	double sum = 0;

	//the for loop is to calculate the sum
	for( i = 0; i < ( n - 1); i++)
	{
		sum += a[i];
	}
	a[i] = sum / (n - 1);	//calculate the avaerage
	a[0] = a[i];
}

//The function definition for main goes is goes from here
int main()
{
	int i, j, row, n;
	//read the nuber for number of rows
	printf("Enter the number of pointer to create\n");
	scanf("%d", &row);

	double *arr[row];
	double temp;

	//read the size for each row
	for (i = 0; i < row; i++)
	{

		printf("size of %d array is\n", (i + 1));
		scanf("%d", &n);

		arr[i] = malloc((n + 1) * sizeof(double));	//allocate the memory dynamically 

		puts("Enter the elements");
		for ( j = 0; j < n; j++)
		{
			scanf("\n%lf", (*(arr + i) + j));
		}
		my_fragments(arr[i], (n + 1));		//function call for fragments
	}

	//Sort elements in descending order
	for(i = 0; i < row; i++)
	{
		for(j = (i + 1); j < row; j++)
		{
			if(arr[i][0] < arr[j][0])
			{
				temp = *(*(arr + i) + 0);
				*(*(arr + i) + 0) = *(*(arr + j) + 0);
				*(*(arr + j) + 0) = temp;
			}
		}
	}

	//Print the mean
	puts("Print the mean");
	for(i = 0; i < row; i++)
	{
		printf("%lf\n", arr[i][0]);
	}
}
