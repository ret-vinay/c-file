/************************************************************************
  Program to find even and odd
 ************************************************************************/

#include<stdio.h>

//The main function starts from here//
int  main()
{
	//intialise the variable data types//
	int num;

	//Enter the number with operator and store in variable//
	printf("Enter the number with operator\n");
	scanf("%d", &num);

	//Check the condition for positive and negative//
	if(num == 0)
	{
		printf("The number is neither positive of negative\n");
	}
	//Check the condition for positive numbers//
	else if( num > 0)
	{
		if((num%2) == 0)
		{
			printf("the number is positive even \n");
		}
		else
		{
			printf("Number is positive odd \n");
		}
	}
	//Check the condition for negative numbers//
	else if(num%2==0)
	{
		printf("Number is negative even \n");
	}
	else
	{ 
		printf("number is negative odd \n");
	}

	return 0;
}
