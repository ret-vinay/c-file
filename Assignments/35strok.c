/************************************************************************
  Program for string token
 ************************************************************************/

#include<stdio.h>
#include<string.h>


//Declare the variables globally
char *saveptr, *ptr_end;

char *my_strtok( char *ptr, char *delim);
int l_ptr;

//the main function goes from here
int main()
{
	int t;
	char str1[100] = "", str2[100] = "";
	char *c;
	char *ptr;

	//read the string from the user
	puts("Enter the string");
	fgets(str1, 100, stdin);

	//Read the delimitors
	puts("enter the delimiters");
	fgets(str2, 100, stdin);

	c = my_strtok(str1, str2);		//Function call for string token
	puts(c);
	while(c = my_strtok(NULL, str2))
	{
		puts(c);
	}
}

//The function definition for string token 
char *my_strtok( char *ptr, char *delim)
{
	//declare the variable and calculate the length of delimitors
	int i, j, l_delim = strlen(delim);

	//check the condition for ptr not null
	if ( ptr != NULL)
	{
		saveptr = ptr;		//ptr is stored in saveptr
		ptr_end = (saveptr + (l_ptr = strlen(ptr)));	//Calculate the length of string and check for end of the string

		//loop is to check th string with delimitors and delete the delimitors
		for ( i = 0; i < (l_delim - 1); i++)
		{
			for ( j = 0; j < (l_ptr - 1); j++)
			{
				( *(delim + i) == *(ptr + j)) ? (*(ptr + j)) = '\0' : 0;
			}
		}
		return saveptr;	//return the saveptr to main
	}
	else
	{
		//Increement the saveptr till not null
		while(*saveptr++ != '\0');
		while(*saveptr++ == '\0');

		//If the saveptr goes beyond the ptrend then return 0 else decrement saveptr
		if( saveptr > ptr_end)
		{
			return 0;
		}
		else
		{
			return --saveptr;
		}
	}
}

