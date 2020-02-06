/*************************************************************************
  Program to convert  a to i and print the result
  program to convert i to a and print the result 
  program for getword
 *************************************************************************/


#include<stdio.h>

//The function definition for a to i//
int atoi(const char *str)
{
	int sum = 0, flag = 0;

	//Check the condition for space and numeric characters//
	while ( *str != 32 && *str >= 48 && *str <= 57)
	{
		sum = sum * 10 + (*str - 48);        /*Add all digits to print as a single interger*/
		flag = 1;
		str++;
	}
	if(flag == 0)
	{
		return 0;        /*If the entered first character is charcter then return with 0*/
	}
	else
	{
		return sum;      /*return the integer value to main*/
	}
}

//The function definition for i to a//
void itoa(char str[], int num)
{
	int n, i, rem, len = 0;
	n = num;

	//Find the length of integer//
	while ( n != 0)
	{
		len++;
		n /= 10;
	}
	//print the inger to strring//
	for ( i = 0; i < len; i++)
	{
		rem = num % 10;
		num = num / 10;
		str[len - (i + 1)] = rem + '0';
	}
	str[i] = '\0';
}

//The function definition for getword//
void getword (char *str)
{
	int i = 0;

	//Check the condition for space and alpha characters and then print the word till first space//
	while ( str[i] != '\n' )
	{
		if( str[i] == 32 || str[i] == 9 )
		{
			break;
		}
		else
		{
			printf("%c", str[i]);
			i++;
		}
	}
}

//the main function goes from here//
int main()
{
	//declare the variables//
	int num, op, i = 0, res;
	char str[100], ch;
	do
	{
		//Select the option to perform the opeartion//
		printf("Select the option to perform operation\n 1-atoi\n 2-itoa\n 3-getword\n");
		scanf("%d", &op);
		__fpurge(stdin);

		//Switch is used to perform specific operation//
		switch(op)
		{
			case 1 : 
				printf("enter the string\n");
				fgets(str, 96, stdin);
				res = atoi(str);		/*Function call for a to i*/
				(res != 0) ? printf("%d\n", res) : puts("0");
				break;
			case 2 :
				printf("Enter the integer\n");
				scanf("%d", &num);
				itoa(str, num);		/*Function call for i to a */
				puts(str);
				break;
			case 3 : 
				printf("enter the string\n");
				fgets(str, 96, stdin);
				getword(str);		/*Function call for getword*/
				break;
		}

		//read the option from the user to continue or to stop//
		printf("Enter the option Y/y to continue or N/n to stop\n");
		scanf("\n%c", &ch);
	}while (ch == 'Y' || ch == 'y');
}

