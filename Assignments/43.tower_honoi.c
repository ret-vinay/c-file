/***********************************************************************
Program for tower of hanoi
***********************************************************************/

#include<stdio.h>

//Function declaration for shifting the disks
void tofh(int ndisk, char source, char temp, char dest);

//the main function goes from here
int main()
{
	//declare the variables
	char source = 'a', temp = 'b', dest = 'c', ch;
	int ndisk, op;

	do
	{
	//Read the number of disks from the user and store it in a variable
	printf("enter the number of disk\n");
	scanf("%d", &ndisk);

	printf("The sequense is\n");
	tofh(ndisk, source, temp, dest);		//Function call for tower of hanoi for 1st time

	printf("enter the option Y/y to continue or N/n to stop\n");
	scanf("\n%c", &ch);
	}while(ch == 'Y' || ch == 'y');
	return 0;
}
void tofh(int ndisk, char source, char temp, char dest)
{
	if (ndisk > 0)
	{
		//recursive function call taking destination as a temporary variable
		tofh(ndisk - 1, source, dest, temp);		
		printf("make the legal move from  %c %c\n", source, dest);	//print the sequence

		//recursive function call taking source as a temporary variable
		tofh(ndisk - 1, temp, source, dest);
	}
}
