/*****************************************************************************
  Program for NRPS
 ****************************************************************************/

#include<stdio.h>
#include<stdlib.h>

int count = 0;		//Declare the count globally

//Function definition for factorial of num
long int fact(int n)
{
	int i;
	long int fact = 1;
	if(n == 0)	//If num is equal to zero then return 1
	{
		return 1;
	}
	for ( i = 1; i <= n; i++)	//For is loop is for greater than 1 num
	{
		fact *= i;
	}
	return fact;
}

//Function definition for print all possible combination
int display(char *str, int num, int limit)
{
	int i;
	for(i = 0; i < num; i++)
	{
		printf("%c", str[i]);	//Print the string 
		count++;		//increment the count

		//if count is greater than or equal to limit then exit from the limit
		if(count >= limit)
		{
			puts("");
			exit(1);
		}
	}
}

//function definition for swapping the character with next character
void swap(char *str, int i)
{
	char temp;
	temp = str[i];
	str[i]= str[i + 1];
	str[i + 1] = temp;
}

//The function definition for main goes from here
int main()
{
	int i = 1, num, limit;
	char str[100], ch;

	do
	{
	//Read the num, limit and elemnts from the user
	printf("Enter the number for number of elements\n");
	scanf("%d", &num);

	printf("enter the limit\n");
	scanf("%d", &limit);

	//if limit is greater than factorial of num then show error
	if(limit > fact(num))
	{
		printf("Error: Enter the limit less than fact of num\n");
		return 1;
	}

	__fpurge(stdin);
	printf("enter the elements\n");
	fgets(str, 100, stdin);

	//The loop will run till all possible combinations
	while(count <= fact(num))
	{
		display(str, num, limit);
		i = i % (num - 1);
		swap(str, i);
		i++;
	}
	printf("Enter the option Y/y to continue or N/n to stop\n");
	scanf("\n%c", &ch);
	}while(ch == 'Y' || ch == 'y');
}

