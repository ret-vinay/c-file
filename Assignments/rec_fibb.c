/**********************************************************************
Program to print fibonnaci series using recursive function method
**********************************************************************/

#include<stdio.h>

//Function definition for fibbonacci//
int fibb ( int n )
{
	if ( n == 0 || n == 1 )
	{
		return 1;
	}
	else
	{
		return ( fibb(n - 1) + fibb(n - 2));
	}
}

//The main function goes from here//
int main()
{
	//declare the variable//
	int i, n, res;
	printf("Enter the number of terms \n");
	scanf("%d", &n);

	//The for loop is to check the fibonacii series//
	for (i = 1; i < n; i++)
	{
		res = fibb(i);

		//If the num is less than or equal then print the result else break//
		if ( res <= n)
		{
			printf("%d\t", res);
		}
	}
	printf("\n");
}

