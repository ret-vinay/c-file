/**************************************************************************
  Program for getword
 **************************************************************************/

#include<stdio.h>
void getword (char *str)
{
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
int main()
{
	int i = 0, flag;
	char str[100];

	printf("Enter the string\n");
	fgets(str, 96, stdin);
	getword(str);
}
