//Program for bitwise lsb //

#include<stdio.h>

//Function definition for bitwise lsb replace//
int bitwise_lsb(int num, int val, int n, int a)
{

	val = ((val & ~ ( ~0 << n )) << a);
	num = num & ~(~( ~0 << n ) << a );
	num = num | val;
	return(num);
}

//Function definition for print in bits//
int display(int num)
{

	//Declare the variables//
	unsigned int mask = 1;
	for ( mask = 1 << ((sizeof(int) * 8 ) -1 ); mask; mask >>= 1)
	{
		(num & mask ) ? putchar('1') : putchar('0');
	}
	printf("\n");
}


//The main function goes from here//
int main()
{

	//Declare the variables//
	int num, val, a, b, n, result;
	unsigned int mask;
	char ch;

	//Use loop for continue or to stop the function for next operation//
	do
	{

		//Read the number, value, a and b from the user//
		printf("Enter the num \n");
		scanf("%d", &num);
		display(num);
		printf("Enter the value for replace\n");
		scanf("%d", &val);
		display(val);
		printf("Enter the number for a and b \n");
		scanf("%d%d", &a, &b);

		//Check the condition for a nad b if it is not in the specific range then terminates the process exit from the main//
		if ( a < 0 || a > 31 || b < a )
		{
			printf("Error: enter the value is invalid\n");
			return 1;
		}
		//Calculate the n for number of bits to replace//
		n = b - a + 1;
		result = bitwise_lsb(num, val, n, a);        /*Function call for bitwise lsb*/
		display(result);                         /*Function call for print in bits*/

		//Read the option from user for continue or to stop//
		printf("Enter the option to continue Y/y or to stop N/n \n");
		scanf("\n%c", &ch);
	}while( ch == 'Y' || ch == 'y' );
	return 0;
}
