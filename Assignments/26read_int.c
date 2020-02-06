/********************************************************************************
  Program is to read the numeric character without using the scanf
********************************************************************************/

#include<stdio.h>

//Function definition for reading the numeric value without using the scanf//
int * read_int(void)
{
	//Declare the variables//
	char num;
	int Flag;
	static int s = 0;
	while(1)
	{
		//Read the integer using getchar and check for the following condition//
		num = getchar(); 
		if (num == '\n')
		{
			break;
		}
		else if(num == '-')
		{
			Flag = 1;
		}
		else
		{
			s = s * 10 + (num - '0');
		}
	}
	if (Flag == 1)
	{
		s = ~s + 1;
	}
		return &s;  /*Returning the adress of read value*/
}

//The main function goes from here//
int main()

{
	//Declare the variable//
	int *sum;
	printf("enter the numeric caharcter\n");
	sum = read_int();                         /*Function call for read integer using getchar*/
	printf("Entered character is %d\n", *sum);
}
