/*********************************************************
  Program to find the squeeze and delete repeated letters
 *******************************************************/
#include <stdio.h>

//The squeeze function definition goes from here//
void squeeze_char(char *str1, char *str2)
{
	char *temp;
	temp = str1;
	int i = 0;

	//The loop will run till null charcter and check the matching characters and then delete the matched characters//
	while(*str2 != '\0')
	{
		while(*str1 != '\0')
		{
			if(*str2 == *str1)
			{
				*str1 = '0';
			}
			str1++;
		}
		str2++;
		str1 = temp;
	}
}

//The main function goes from here//
int main()
{
	char str1[100], str2[100];
	int i = 0;

	//Read the string one and 2 from the user//
	printf("Enter the string1\n");
	fgets(str1, 96, stdin);
	printf("Enter the string2\n");
	fgets(str2, 96, stdin);
	squeeze_char(str1, str2);		/*function call for squeeze*/

	//Print the string1//
	while(str1[i] != '\0')
	{
		if(str1[i] != '0')
		{
			printf("%c", str1[i]);
		}
		i++;
	}
	puts(" ");
	return 0;
}


