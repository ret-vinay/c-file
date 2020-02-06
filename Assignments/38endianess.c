
/******************************************************************************
			Program to check the endianess
******************************************************************************/

#include<stdio.h>

void endian(char *ptr);			//Function declaration for check the endianess

//The main function goes from here//
int main()
{
	//declare the variables
	int num;
	char ch;

	do
	{
	//read the hexadecimal number from the user
	printf("enter the number to check endianess\n");
	scanf("%x", &num);

	//Convert the integer to strings by tape casting char *
	char *ptr = (char *) &num;

	//Function call for check the endianess of processor
	endian(ptr);	

	//Check the condition and print the endianess
	( *ptr == (*(ptr + 0))) ? printf("This is Little Endian\n") : printf("This is Big Endian\n");

	//read the option to continue or to stop from the user
	printf("Enter the option Y/y to continue or N/n to stop\n");
	scanf("\n%c", &ch);
	}while(ch == 'Y' || ch == 'y');
	return 0;
}

//The function definition for Endianess 
void endian(char *ptr)
{
	int i;
	for ( i = 0; i < 4; i++)
	{
		printf("%x", *(ptr + i));	//For endianess
	}
	puts("");
}
