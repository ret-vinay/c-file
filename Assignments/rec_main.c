/********************************************************************************
	Program to find the factorial using recursive main function
********************************************************************************/


#include<stdio.h>

//The main function goes from here//
int main(int n)
{
	//declare the variables used for fact//
	static int num, Flag = 0, i = 1, fact = 1;

	//Check the flag condition if it is 0 then read the input from the user and increase the variable for skipping this function//
	if ( Flag == 0)
	{
		printf("Enter the number \n");
		scanf("%d", &num);
	}
	Flag++;

	//If the number is 0 then print the value 1 for 0!//
	if ( num == 0)
	{
		printf("1");
		return 0;
	}

	//If the number is less than or equal to number and flag is less than or equal to number then calculate the fact//
	else if ( i <= num && Flag <= num )
	{
		fact = fact * i;
		i++;
		main(i);                /*Calling the main recursively*/
	}

	//If the flag is greater than number then print the factorial of number//
	if ( Flag > num && Flag == num + 1)
	{
		printf("The factorial is %d\n", fact);
		Flag = 1;
	}
}
