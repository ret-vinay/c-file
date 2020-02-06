/*****************************************************************************
  Program for compare string with substring
 *****************************************************************************/

#include<stdio.h>
#include<string.h>

//The function for string and substring is goes from here
char *my_strstr( char *str1, char *str2)
{
	int i = 0, j, s, ptr, len1, len2;

	//calculate the two lengths
	len1 = strlen(str1);
	len2 = strlen(str2);

	//loop is to check the string with substring
	for ( j = 0; ((j < (len1 - 1)) && (i < (len2 - 1))); j++)
	{
		if (*(str1 + j) == *(str2 + i))
		{
			( i == 0 ) ? (s = j) : 0;	//if both string and substring are same then print string
			i++;
		}
		else
		{
			if ( i > 0)
			{
				--j;
			}
			i = 0;
			s = len1;
		}
	}
	if(s == len1) 
	{
		return 0;
	}
	else
	{
		return(str1 + s);
	}

}

//The main function goes from here
int main()
{
	char str1[100], str2[100];
	char *c;

	//read the two strings
	printf("enter the string\n");
	fgets(str1, 96, stdin);
	printf("ente6 the substring\n");
	fgets(str2, 96, stdin);

	c = my_strstr(str1, str2);		//Function call for strstr
	(c == 0) ? puts("string not found") : puts(c);
}

