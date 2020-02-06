/******************************************************************************
  Program to print float in binary form
 ******************************************************************************/

#include<stdio.h>

//Function definition for print float in bits
void display_bits(int num)
{
	unsigned int mask;

	//Loop used to check all bits to print //
	for(mask = 1 << (sizeof(int) * 8 - 1) ; mask; mask >>=1)
	{
		( num & mask) ? printf("1") : printf("0");
	}
	printf("\n");
}

//function definition for print double in bits
void display_double_bits(double num)
{
	unsigned int mask;
	int i, *ptr;

	ptr = (int *)&num;		//Type casting

	//Loop used to check all bits to print //
	for ( i = 0; i < 2; i++ )
	{
		for(mask = 1 << (sizeof(int) * 8 - 1) ; mask; mask >>=1)
		{
			(*(ptr + i) & mask) ? printf("1") : printf("0");
		}
	}
	printf("\n");
}

int main()
{
	//declaring the variables//
	int *a, op;
	float num;
	char ch;

	do
	{
		//read the option for float and binary from the user
		printf("Enter the option \n 1-float bits\n 2-double bits\n");
		scanf("%d", &op);
		getchar();

		//Read the input from from user//
		printf("Enter the value to print in binary\n");
		scanf("%f", &num);
		switch(op)
		{
			case 1:
				*((float *)a) = num;		//Type casting for pointer for float value
				display_bits(*a);		//Function call for print float in bits
				break;
			case 2 :
				display_double_bits(num);		//function call for print double in bits
				break;
			default :
				printf("enter the valid option \n");
				break;
		}

		//read the option from the user to continue or to stop
		printf("Enter the option to continue Y/y or to stop N/n\n");
		scanf("\n%c", &ch);
	}while(ch == 'Y' || ch == 'y');
	return 0;
}
