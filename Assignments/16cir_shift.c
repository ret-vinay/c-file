/***********************************************************************************************************
  program for circular right and left shift
 ************************************************************************************************************/

#include<stdio.h>

//Function definition for right shift by number of position//
int right_shift(int n, int loc)
{
	//Declare the variables
	int i, result, m = 1; 
	unsigned mask = 1;

	m = 1 << ((sizeof(int) * 8 ) - 1 );

	//Shift the number of bits to circular right using loop//
	for ( i = 0; i < loc; i++)
	{
		if ( n & mask )
		{
			n = n >> 1;
			n = n | m;
		}
		else
		{
			n = n >> 1;
			if( n & m )
			{
				n = n ^ m;
			}
		}
	}
	return n;
}


//Function definition for print bits//
int display(int num)
{
	unsigned int i, mask;
	for ( mask = 1 << ((sizeof(int) * 8 ) - 1 ); mask; mask >>= 1 )
	{
		( num & mask ) ? putchar ('1') : putchar('0');
	}
	printf("\n");
}

//function definition for left shift by number of bits//
int left_shift(int n, int loc)
{
	//Declare the variables//
	int i, m;
	unsigned int mask = 1;
	m = 1 << ((sizeof(int) * 8 ) - 1 );

	//Shift the number of bits to circular left using loop//
	for ( i = 0; i < loc; i++)
	{
		if ( n & m )
		{
			n = n << 1;
			n = n | mask;
		}
		else
		{
			n = n << 1;
		}
	}
	return n;
}

//The main function goes from here//
int main()
{

	//declare the variables//
	int i, num, pos, result, op;
	char ch;

	do
	{
		//Select the options and read the number and number of bits to be shift//
		printf("Select the option to perform the function \n 1-right_shift(num, pos)\n 2-left_shift(num,pos)\n");
		scanf("%d", &op);
		printf("Enter the number \n");
		scanf("%d", &num);
		display(num);
		printf("Enter the number of bits to be shifted\n");
		scanf("%d", &pos);

		//Switch operation is used to perform the paricular function//

		switch (op)
		{
			case 1 : 
				result = right_shift(num,pos);      /*Function call for right shift*/
				display(result);                   /*function call for result for printing bits*/
				break;
			case 2 :
				result = left_shift(num,pos);      /*Function call for left shift*/
				display(result);                  /*Function call for result for printing in bits*/
				break;
			default :
				printf("Entered option is invalid\n");
				break;
		}

		//Select the option to continue or to stop//
		printf("enter the option to continue Y/y or N/n \n");
		scanf("\n%c", &ch);
	}while ( ch == 'Y' || ch == 'y');
	return 0;
}

