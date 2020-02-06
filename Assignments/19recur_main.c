/*********************************************************************************
	Program for recursive main using factorial as a example
*********************************************************************************/
#include<stdio.h>

int main(int n)
{

	//Declare the variables//
	static int i, res, num, fact, flag = 1;
	static char ch;

	//Check the falg condition for only one time execution//
	if (flag)
	{
		do
		{
			flag = 0;

			//Read the number from the user//
			printf("Enter the number \n");
			scanf("%d", &n);

			//Call the main recursively//
			res = main(n);

			//Print the factorial using recursively//
			printf("The factorial is = %d\n", res);

			//Read the option to continue or to stop from the user//
			printf("enter the option y to continue or n to stop\n");
			scanf("\n%c", &ch);
		}while ( ch == 'y');
	}

	//The recursive function definition goes from here//
	if ( n == 0 )
	{
		return 1;
	}
	else 
	{
		return n * main(n -1);
	}
}
