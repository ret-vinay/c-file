//Program for bitwise functions//

#include<stdio.h>

//Function definition for get n bits//
int get_nbits(int a, int pos)
{	

	//Declre the variables//
	unsigned int mask = 0;
	int result;

	mask = ~(~(mask) << pos);
	result = a & mask;
	return result;
}

//function definition for setnbits//
int set_nbits(int a, int pos, int val)
{	
	//Declare the variables//
	unsigned int mask = 0;
	int result;

	printf("Enter the value\n");
	scanf("%d", &val);

	a = a & (~((~mask) << pos));
	result = a | val;
	return result;
}

//Function definition for get nbits from position//
int get_nbits_from_pos( int a, int pos, int n)
{	
	printf("Enter the no of bits\n");
	scanf("%d", &n);

	a = a & (~(~0 << n) << pos + 1 - n);
	a = a >> pos + 1 -n; 
	return a;
}


//Function definition for set nbits from position//
int set_nbits_from_pos(int a, int pos, int n, int val)
{
	unsigned int mask = 0;
	printf("Enter the no of bits\n");
	scanf("%d", &n);
	printf("Enter the value for replace\n");
	scanf("%d", &val);

	val = ( val & ((~(~0 << n )) << pos ));
	a = a & ~((~(~0 << n )) << pos);
	a = a | val;
	return a;
}

//Function definition for toggle the bits//
int togglebits_from_pos( int a, int pos, int n)
{	

	//Declare the variables//
	unsigned int mask = 0;
	int result;

	printf("Enter the no of bits\n");
	scanf("%d", &n);

	a = a ^ (~( ~0 << n ) << pos + 1 - n );
	return a;
}


//Function definition for print in bits//
int display(int a)
{
	unsigned int i, mask;
	for ( mask = 1 << ((sizeof(int) * 8 ) - 1 ); mask; mask >>= 1 )
	{
		( a & mask ) ? putchar ('1') : putchar('0');
	}
	printf("\n");
}


//The main function goes from here//
int main()
{

	//Declare the variables//
	int n, op, result, pos, a, val;
	char ch;

	//Use do while loop to continue the operation or to stop//
	do
	{

		//Select the option to perform specific function//
		printf("select the option to perform function:\n 1-get_nbits\n 2-set_nbits\n 3-get_nbits_from_pos\n 4-set_nbits_from_pos\n 5-toggle_bits_from_pos\n 6-print_bits \n");
		scanf("%d", &op);

		//The loop is used to perform specific operation based on user input//
		switch (op)
		{
			case 1 :
				//Read the number and position from the user//
				printf("Enter the number\n");
				scanf("%d", &a);
				display(a);     /*Function call for print in bits*/
				printf("Enter the position\n");
				scanf("%d", &pos);
				result = get_nbits(a, pos);
				display(result);                /*Function call for print in bits*/
				break;
			case 2 : 
				//Read the number and position from the user//
				printf("Enter the number\n");
				scanf("%d", &a);
				display(a);     /*Function call for print in bits*/
				printf("Enter the position\n");
				scanf("%d", &pos);
				result = set_nbits(a, pos, val);
				display(result);               /*Function call for print in bits*/     
				break;
			case 3 :
				//Read the number and position from the user//
				printf("Enter the number\n");
				scanf("%d", &a);
				display(a);     /*Function call for print in bits*/
				printf("Enter the position\n");
				scanf("%d", &pos);
				result = get_nbits_from_pos(a, pos, val);
				display(result);                               /*Function call for print in bits*/
				break;
			case 4: 
				//Read the number and position from the user//
				printf("Enter the number\n");
				scanf("%d", &a);
				display(a);     /*Function call for print in bits*/
				printf("Enter the position\n");
				scanf("%d", &pos);
				result = set_nbits_from_pos(a, pos, n, val);
				display(result);                              /*function call for print in bits*/
				break;
			case 5 :
				//Read the number and position from the user//
				printf("Enter the number\n");
				scanf("%d", &a);
				display(a);     /*Function call for print in bits*/
				printf("Enter the position\n");
				scanf("%d", &pos);
				result = togglebits_from_pos(a, pos, val);
				display(result);                            /*Function call for print in bits*/
				break;
			case 6 : 
				//Read the number and position from the user//
				printf("Enter the number\n");
				scanf("%d", &a);
				display(a);              /*Function call for print in bits*/
				break;
		}
		printf("enter the option to continue Y/y or stop N/n : \n");
		scanf("\n%c", &ch);
	}while ( ch == 'Y' || ch == 'y');
	return 0;
}
