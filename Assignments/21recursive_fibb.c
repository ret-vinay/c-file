/**********************************************************************
  Program to print fibonnaci series using recursive function method
 **********************************************************************/

#include<stdio.h>

//Function definition for fibbonacci//
int fibb ( int n )
{
	//Declare the variables using static int//
	static int first = 0, second = 1, sum = 0;

	//for number is euals to zero //
	if (n == 0)
	{
		printf("%d\t", first);
	}

	//For number equal to one//
	else if(n == 1)
	{
		fibb(n - 1);
		printf("%d\t", second);
	}

	//For number is greater than one//
	else 
	{
		fibb(n - 1);
		sum = first + second;
		if ( sum <= n)
		{
			first = second;
			second = sum;
			printf("%d\t", sum);
		}
	}
}

//The function definition for fibb negative numbers//
int fibb_neg( int n)
{
	static int first = 0, second = 1, sum = 0;

	//Condition will check with the entered number//
	if ( sum <= n)
	{
		return 1;
	}
	else
	{
		sum = first - second ;
		if ( sum > n)
		{
			first = second;
			second = sum;
			printf("%d\t", sum);
		}
		return fibb_neg(n);           /*Recursive function call for fibbonacci negative numbers*/
	}
}

//The main function goes from here//

int main()
{
	//declare the variable//
	int n, res;
	printf("Enter the number of terms \n");
	scanf("%d", &n);
	if ( n >= 0)
	{

		fibb(n);             /*Calling the function for recursive fibb for positive numbers*/
		printf("\n");
	}
	else
	{
		fibb_neg(n);  /*recursive function call for negative fibb numbers*/
		printf("\n");
	}
	return 0;
}
