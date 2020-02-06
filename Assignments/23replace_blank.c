/************************************************************************
  Program for remove blank from the string
 ************************************************************************/
#include<stdio.h>

int main()
{

	//Declare the variables//
	char ch;

	//read the string from the user//
	printf("Enter the string\n");

	//Use the loop for removing the space from the string//
	while ( (ch = getchar()) != '\n')
	{

		//Check the condition for characters other than space and tab//
		if (ch != 32  && ch != 9)
		{
			printf("%c", ch);
		}

		//Check the condition for space and tab //
		else if ( ch == 32 || ch == 9)
		{
			printf(" ");                     /*remove blank space and tab with one space*/
			ch = getchar();
			while ( ch == 32 || ch == 9)
			{
				ch = getchar();
			}
			ungetc(ch, stdin); 	/*returns the characters to the main while loop*/
		}
	}
	puts("");
	return 0;
}


