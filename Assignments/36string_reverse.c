/********************************************************************************
  Program to print the string inreverse order
 ********************************************************************************/

#include<stdio.h>
#include<string.h>

//Function definition to find the length of string//
int my_strlen( char *str)
{
	int i = 0;
	while (str[i] != '\0')         /*The loop will run till not null character*/
	{
		i++;
	}
	return i;
}

//Function definition for reverse string non-recursively//
void rev_string( char *str, int len)
{
	while (len >= 0)
	{
		printf("%c", str[len]);         /*Print the characters of string*/
		len--;
	}
}

//Function defintion for recusrive string reverse//
void rec_rev(char *str)
{
	if ( *str == '\0' )
	{
		return ;
	}
	else
	{
		rec_rev(str + 1);
		printf("%c", *str);
	}
}

//The main function goes from here//
int main()
{

	//Declare the variables//
	char str[100], ch;
	int len, op;

	//read the string from the user//
	printf("Enter the string\n");
	fgets(str, 96, stdin);
	do
	{
		//Read the option from user to select the operation// 
		printf("Select the operation \n 1-recursive \n 2-non recursive method\n");
		scanf("%d", &op);

		switch (op)
		{
			case 1: 
				//Read the string from user and store it in a variable//
				len = my_strlen(str) - 1;                 /*Function call for calculate the length of string*/
				printf("%d", len);                 /*print the length of sring*/
				rev_string(str, len);
				puts("");
				break;
			case 2 : 
				rec_rev(str);		/*Call the string recursively*/
				puts("");
				break;
		}
		//Read the option from the user to continue or to stop//
		printf("enter the option Y/y to continue or to stop N/n\n");
		scanf("\n%c", &ch);
	}while (ch == 'Y' || ch == 'y');
	return 0;
}
