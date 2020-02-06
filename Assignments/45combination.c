/*********************************************************
Program : Print all the combinations of a given string
*********************************************************/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//swap the characters
void swap(char *s1, char *s2)
{
	char temp;
	temp = *s1; //swap
	*s1 = *s2;
	*s2 = temp;
}

//function definition for find possible combination
void my_combination(char *s, int start, int n)
{
	int i, j;
	if (start == n) //reaches maximun, peint
		puts(s);
	else
	{
		for (i = start; i < n; i++)
		{
			swap((s + start), (s + i)); //swap them
			my_combination(s, (start + 1), n); //callit recursively
			swap((s + start), (s + i));
		}
	}
}

//The main function definition
int main()
{
	int num, i,f;
	char *str = malloc(15);

	//read the elements
	puts("Enter Elements");
	scanf("\n%s", str);

	//print them
	puts("The combinations are");
	my_combination(str, 0, strlen(str));
}
