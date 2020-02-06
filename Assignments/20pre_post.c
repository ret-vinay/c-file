//Program for pre and post increment for using pointer//

#include<stdio.h>

//Function definition for pre-increment//
int pre_inc(int *i, int *num)
{
	int mask = 1;

	//check the condition for true and false value, so and with mask//
	if( *num & mask )
	{
		*num = *num ^ mask;
		mask = mask << 1;
	}
	*num = *num ^ mask;
	*i = *num;
}

//Function definition for post increment//
int post_inc(int *i, int *num)
{
	int mask = 1;
	if( *num & mask )
	{
		*num = *num ^ mask;
		mask = mask << 1;
	}
	*num = *num ^ mask;
}

//The main function goes from here//
int main()
{

	//Declare the variables//
	int num, i, op;
	char ch;
	unsigned int mask = 1;

	do
	{
		//Read the number from the user//
		printf("Enter the number for pre increment or post increment\n");
		scanf("%d", &num);

		//select the option for pre and post increment//
		printf("enter the option\n 1-pre_inc\n 2-post_inc\n");
		scanf("%d", &op);

		i = num;
		//check the condition for valid option//
		if (op >= 1 || op <= 2)
		{
			if ( op == 1)                /*For pre increment*/
			{
				pre_inc(&i, &num);          /*Function call for pre increment*/
				printf("num = %d, i = %d\n", num, i);
			}
			else
			{
				post_inc(&i, &num);              /*Function call for post-increment*/
				printf("num = %d, i = %d\n", num, i);
			}
		}
		else
		{
			printf("The enter option is invalid\n");
		}

		//Read the option for continue or to stop//
		printf("Enter the option to continue Y/y or to stop N/n \n");
		scanf("\n%c", &ch);
	}while(ch == 'Y' || ch =='y');
	return 0;
}
