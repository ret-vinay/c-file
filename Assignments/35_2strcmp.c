/*************************************************************************
  Program for compare two string strings
 ************************************************************************/

#include<stdio.h>
#include<string.h>

//the function definition for string compare goes from here
int my_strcmp(char *str1, char *str2)
{
	int i, flag = 0, len1, len2;
	len1 = strlen(str1);		//calculate the length of string1
	len2 = strlen(str2);		//calculate the length of string2

	//If string length are not equals then return 0
	if ( len1 != len2)
	{
		return 0;
	}
	else
	{
		while (*str1 != '\0')		//loop will run till string not equls to 0
		{
			if (*str1 == *str2)	//check all the characters are equal or not
			{
				flag = 1;
				str1++;
				str2++;
			}
			else
			{
				flag = 0;
				break;
			}
		}
	}

	//if strings are equal then return 1 to main 
	if ( flag == 1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}


//the function for string case compare goes from here
int my_strcmp_case( char *str1, char *str2)
{
	int i, flag = 0, len1, len2;

	//calculate the length of two strings
	len1 = strlen(str1);		
	len2 = strlen(str2);

	//if length of two strings are not equal then return 0
	if ( len1 != len2)
	{
		return 0;
	}
	else
	{
		while (*str1 != '\0')
		{
			if (toupper(*str1) == toupper(*str2))		//Check the condition for case compare
			{
				flag = 1;
				str1++;
				str2++;
			}
			else
			{
				flag = 0;
				break;
			}
		}
	}

	//if bothe strings are equal then return 1
	if ( flag == 1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}


//the main function goes from here
int main()
{
	char str1[100], str2[100], ch;
	int i, res, op;

	//check the option for case compare and not case compare
	do
	{
	printf("Enter the option\n 1-case compare\n 2-Not case compare\n");
	scanf("%d", &op);
	getchar();

	//read the two strings from the user
	printf("Enter the string1 \n");
	fgets( str1, 96, stdin);

	printf("Enter the string2 \n");
	fgets( str2, 96, stdin);
	switch(op)
	{
		case 1:
			res = my_strcmp(str1, str2);		//function call for string compare
			( res == 1) ? printf("The strings are equal \n") : printf("The strings are not equal\n");
			break;
		case 2 :
			res = my_strcmp_case(str1, str2);	//Funcction call for string case compare
			( res == 1) ? printf("The strings are equal \n") : printf("The strings are not equal\n");
			break;
		default :
			printf("Enter the valid option\n");
			break;
	}
	printf("enter the option Y/y to continue or N/n to stop\n");
	scanf("\n%c", &ch);
	}while(ch == 'Y' || ch == 'y');
	return 0;
}

