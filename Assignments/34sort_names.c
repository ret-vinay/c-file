/*****************************************************************************
Program for Sort names in alphabetical order
****************************************************************************/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>


//Function definition comparing the two strings of same character at the start
int sort(char *str1, char *str2)
{
	while(*str1 == *str2 && *str1 && *str2)
	{
		str1++;
		str2++;
	}
	if(*str1 > *str2)	
		return 1;
	else
		return 0;
}

//Function defintion for sorting names in alphabetical order
int sort_names(char **a, int size)
{
	//declare the variables
	int i, j, res;
	char *temp;
	for(i = 0; i < size; i++)
	{
		for ( j = i + 1; j < size; j++)
		{
			res = sort(a[i], a[j]);		//Function call for compare the two names
			if(res)
			{
				temp = a[i];		//swapping the names
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
}


//The main function definition goes from here
int main()
{
	//declare the variables
	int size, i;
	char ch;

	do
	{
	//read the size for number of names to be sorted 
	printf("Enter the size\n");
	scanf("%d", &size);
	getchar();

	char *a[size];		//declare the varibles of 2d string

	//Read the names from the user 
	printf("enter the names\n");
	for(i = 0; i < size; i++)
	{
		a[i] = (char *)malloc(10 * sizeof(char));	//allocate the memory dynamically
		fgets(a[i], 10, stdin);
	}

	sort_names(a, size);	//Function call for sort names

	//Print the sorted names
	puts("sorted names");
	for ( i = 0; i < size; i++)
	{
		puts(a[i]);
	}
	printf("enter the option Y/y to continue or N/n to stop\n");
	scanf("\n%c", &ch);
	}while(ch == 'Y' || ch == 'y');
}
