/***************************************************************************
				Program for squeeze
***************************************************************************/

#include<stdio.h>
#include<string.h>

void squeeze(const char str1[], const char str2[], int len1, int len2);      /*Function declaration for squeeze*/


//The function definition is to calculate the length of string//
int my_strlen( char *str)
{
	int l;
	while ( str[l] != '\0')
	{
		l++;
	}
	return l;
}

//The main function definition goes from here//
int main()
{
	char str1[100], str2[100];
	int len1, len2;
	
	//Read the string 1 from the user//
	printf("Enter the string1 \n");
	fgets(str1, 96, stdin);

	//Read the string 2 from the user// 
	printf("Enter the string2\n");
	fgets(str2, 96, stdin);
	len1 = my_strlen(str1);                       /*Function call for calculate the length of string1*/
	len2 = my_strlen(str2);                       /*Function call for calulate the length of string2*/
	squeeze(str1, str2, len1, len2);             /*Function call for squeeze the string*/
	return 0;
}


//The function definition for squeeze //
void squeeze(const char str1[], const char str2[], int len1, int len2)
{
	int k = 0, flag;
	int i, j;
	char str3[100];

	//The outer for loop is to compare the character of first string with second string//
	for ( i = 0; i < len1; i++)
	{
		flag = 0;
		for ( j = 0; j < len2; j++)                    /*This for loop is for next string*/
		{
			if ( str1[i] == str2[j] )
			{
				flag = 1;
				break;
			}
		}
		if ( flag != 1)
		{
			str3[k] = str1[i];
			k++;
		}
		str3[k] = '\0';
	}
	puts(str3);
}
