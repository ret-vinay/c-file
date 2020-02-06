/*********************************************************************
  Program to find the sizeof datatype without using sizeof operator
 *********************************************************************/

#include<stdio.h>

//Macro definition for sizeof operator 
#define SIZE_OF_DATATYPE(var) (char *)(&var + 1) - (char *)(&var)


//The main function definition goes from here
int main()
{
	//declare all the datatype
	char ch;
	short int y;
	int x;
	float fl;
	double d;

	//Print the sizeof all datatypes
	printf("The size of character = %d\n", SIZE_OF_DATATYPE(ch));
	printf("The size of short integer = %d\n", SIZE_OF_DATATYPE(y));
	printf("The size of integer = %d\n", SIZE_OF_DATATYPE(x));
	printf("The size of float = %d\n", SIZE_OF_DATATYPE(fl));
	printf("The size of double = %d\n", SIZE_OF_DATATYPE(d));

	return 0;
}
