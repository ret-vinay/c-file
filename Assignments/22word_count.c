/******************************************************************
  Program to count the line, word and characters
 ******************************************************************/

#include<stdio.h>
int main()
{

	//Declare the variables and intialise the all count to zero//
	char ch;
	int line_count = 0, word_count = 0, char_count = 0;

	//Read the characters from the user and press cntrl D to count//
	printf("Enter the characters and Cntrl D\n");

	//Check the charcters till end of file//
	while ((ch = getchar()) != EOF)
	{

		//Check the condition for alpha characters// 
		if ( ch >= 'A' && ch <= 'Z' ||ch >= 'a' && ch <= 'z')
		{

			//Increase the count//
			char_count++;
			word_count++;
			ch = getchar();

			//This loop is for next characters from the word//
			while( ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z' )
			{
				char_count++;
				ch = getchar();
			}
			ungetc(ch, stdin);         /*This line is character count for space at the end of line*/
		}

		//chack the space characters and increase count //
		else if ( ch == 32 || ch == 9)
		{
			char_count++;
		}

		//Check the condition for newline and increase line count//
		else if ( ch == '\n' )
		{
			char_count++;
			line_count++;
		}
	}
	line_count++;
	puts("");
	//Print all count values//
	printf("The count of word, line and character is \n");
	printf("wc = %d, lc = %d, cc = %d\n", word_count, line_count, char_count); 
	return 0;
}

