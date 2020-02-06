/*****************************************************
  Program to create ctype library files
 ******************************************************/


#include<stdio.h>

//Function definition for alpha characters//
int my_isalpha(int i)
{
	int res;

	//Check the value with ascii value for alpha characters and execute the condition//
	res = ( i >= 65 && i <= 90 || i >= 97 && i <= 122 ) ? 1 : 0;
	return res;
}

//Function definition for alpha-numeric characters//
int my_isalnum(int j)
{
	int res;

	//Check the entered character with ascii characters and execute the condition//
	res = (j >= 48 && j <= 57 || j >= 65 && j <= 90 || j >= 97 && j <= 122) ? 1 : 0;
	return res;
}


//Function definition for X-digit//
int my_isxdigit(int k)
{

	int res;

	//Check the entered characters with ascii characters and then execute the condition//
	res = ( k >= 48 && k <= 57 || k >= 65 && k <= 70 || k >= 97 && k <= 102) ? 1 : 0;
	return res;
}

//Function definition for digit//
int my_isdigit(int m)
{

	int res;

	//Check the entered characters with ascii characters and then execute the condition//
	res = ( m >= 48 && m <= 57 ) ? 1: 0;
	return res;
}

//Function for control characters//
int my_iscntrl(int l)
{
	int res;

	//Check the entered characeter with ascii characters and then execute the condition//
	res = ( l >= 0 && l <= 32 || l == 127 ) ? 1 : 0;
	return res;
}

//Function definition for Upper characters//
int my_isupper(int i)
{
	int res;

	//Check the value with ascii value for Upper characters and execute the condition//
	res = ( i >= 65 && i <= 90 ) ? 1 : 0;
	return res;
}

//Function definition for lower characters//
int my_islower(int i)
{
	int res;

	//Check the value with ascii value for lower characters and execute the condition//
	res = ( i >= 97 && i <= 122 ) ? 1 : 0;
	return res;
}

//Function deifinition for printable characters//
int my_isprint(int n)
{
	int res;

	//Check the value with ascii value for printable characters and execute the condition//
	res = ( n >= 32 && n <= 127 ) ? 1 : 0;
	return res;
}


//The main function goes from here//
int main()
{
	//declare the variables//
	char ch, option;
	int op, res, result;

	do
	{

		//Read the characters form the user//
		printf("Enter the character \n");
		scanf("%c", &ch);


		//select the option to perform the operation//
		printf("enter option to be check\n 1-alpha\n 2-alphanum\n 3-Xdigit\n 4-control characters\n 5-digit\n 6-Upper\n 7-lower\n 8-print\n" );
		scanf("%d", &op);


		//Switch condition is used to perform the particular operation//
		switch (op)
		{
			case 1 : 
				res = my_isalpha(ch);   /*Function call for alpha characters*/
				(res) ? printf("The entered character is alpha\n") : printf("Entered character is not alpha\n");
				break;
			case 2 :
				res = my_isalnum(ch);    /*Function call for alpha-numeric characters*/
				(res) ? printf("The entered character is alphanumeric\n") : printf("Entered character is not alphanumeric\n");
				break;
			case 3 :
				res = my_isxdigit(ch);    /*Function call for X-digit*/
				(res) ? printf("Entered character is digit\n") : printf("Entered character not digit\n");
				break;
			case 4 : 
				res = my_iscntrl(ch);    /*Function call for control characters*/
				(res) ? printf("Non printable characters\n") : printf("printable characters\n");
				break;
			case 5 : 
				res = my_isdigit(ch);    /*Function call for digit characters*/
				(res) ? printf("Entered character is digit\n") : printf("Entered character is not digit\n");
				break;
			case 6 : 
				res = my_isupper(ch);    /*Function call for Upper characters*/
				(res) ? printf("entered character is upper\n") : printf("entered character is not upper\n");
				break;
			case 7 :
				res = my_islower(ch);    /*Function call for lower characters*/
				(res) ? printf("Entered character is lower\n") : printf("Entered character is not lower\n");
				break;
			case 8 :
				res = my_isprint(ch);      /*Function call printable characters*/
				(res) ? printf("Entered character is printable character \n"): printf("Entered character is not printable character\n");
				break;
		}

		//Select the option for continue or to stop//
		printf("enter the option to continue Y/y or stop N/n\n");
		scanf("\n%c", &option);
	}while( option == 'Y' || option == 'y' );
	return 0;
}
