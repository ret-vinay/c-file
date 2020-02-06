/*****************************************************************************
  Program for finding the variance of array elements
 ****************************************************************************/
#include<stdio.h>
#include<stdlib.h>

//the function definition for calculating the mean//
int mean( int *a, int limit)
{
	int sum = 0, i;
	double res;
	for ( i = 0; i < limit; i++)
	{
		sum += (*(a + i));
	}
	//printf("The sum is = %d\n", sum);
	res = (double)sum / limit;
	return res;
}

//The function definition for calculating variance//
int variance( int *a, int limit, int res)
{
	int i, var;
	for( i = 0; i < limit; i++ )
	{
		*(a + i) = (*(a + i)) - res;
		*(a + i) = (*(a + i)) * (*(a + i));
	}
	printf("the elements are \n");
	for ( i = 0; i < limit; i++)
	{
		printf("%d\t", a[i]);
	}
	puts("");
	var = mean(a, i);      //Function call for mean(average)
	return var;
}

//The main function definition goes from here//
int main()
{
	//declare the variables//
	int op, a[100], *ptr;
	int limit, i, res, var;
	char ch;
	//read the option for dynamic and static memory allocation metod from the user//
	do
	{
		printf("Enter the option for\n 1-dynamic\n 2-static\n");
		scanf("%d", &op);
		switch (op)
		{
			case 1 : 
				printf("enter the limit of array\n");		//Read the limit of array from the user
				scanf("%d", &limit);
				ptr = (int *)malloc(limit * sizeof(int));		//Dynamic memory allocation
				printf("Enter the elemnts of array\n");		//read the elements of array from the user
				for ( i = 0; i< limit; i++)
				{
					scanf("%d", &ptr[i]);
				}
				res = mean(ptr, limit);				//fucntion call for mean
				printf("The mean is = %d\n", res);
				var = variance(ptr, limit, res);			//fucntion call for calculate variance
				printf("The variance is = %d", var);
				free(ptr);		//Free the memory
				break;
			case 2 :
				printf("enter the limit of array\n");		//read the limit of array
				scanf("%d", &limit);
				printf("Enter the elemnts of array\n");		//read the elements of array
				for ( i = 0; i< limit; i++)
				{
					scanf("%d", &a[i]);
				}
				res = mean(a, limit);				//function call for mean
				printf("The mean is = %d\n", res);
				var = variance(a, limit, res);			//function call for variance
				printf("The variance is = %d", var);
				break;
			default :
				printf("Invalid option\n");
				break;
		}
		puts("");
		printf("Enter the option to Y/y continue or N/n to stop\n");
		scanf("\n%c", &ch);
	}while (ch == 'Y' || ch == 'y');
}
