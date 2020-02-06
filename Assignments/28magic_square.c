/***********************************************************************************
  Program for magic square
 ***********************************************************************************/

#include<stdio.h>


//the function definition for magic square//
void magic_square( int n)
{
	int a[100][100], i, j, num;
	i = 0;						//For Top row 
	j = (n - 1) / 2;				//For Centre column
	for ( num = 1; num <= n*n; num++)
	{
		a[i][j] = num;			//Enter the elements
		i--;				//Move up
		j++;				//Move right
		if ( num % n == 0 )		
		{
			i += 2;			//One below The previous row	
			j--; 			//Next to the previous column
		}
		if ( j == n)
		{
			j = 0;			//Goto the first column
		}
		if ( i == -1)
		{
			i = n -1;		//goto the bottom most row
		}

	}
	//Print the elemnts of magic square are//
	printf("The elements of magic square are\n");
	for ( i = 0; i < n; i++)
	{
		for ( j = 0; j < n; j++)
		{
			printf("%4d", a[i][j]);
		}
		puts("");
	}
}

//The function definition for main is goes from here//
int main()
{
	int n;
	char ch;
	do
	{

	//read the n value from the user//
	printf("Enter the value of n(odd value)\n");
	scanf("%d", &n);

	//Check the condition for even and odd//
	if ( n % 2 == 0)
	{
		printf("Error: Enter the odd number only\n");
		return 1;
	}
	else
	{
		magic_square(n);		//Function call for magic square
	}

	//Read the option from the user//
	printf("Enter option to Y/y continue or to N/n stop\n");
	scanf("\n%c", &ch);
	}while(ch == 'Y' || ch == 'y');
	return 0;
}
