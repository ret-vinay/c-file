//Program for swap two numbers using passby refence method//
#include<stdio.h>

//Function defintion for swapping the two elements//
void swap( int *ptr, int *ptr1 )
{
	*ptr = *ptr + *ptr1;
	*ptr1 = *ptr - *ptr1;
	*ptr = *ptr - *ptr1;
}

//The main function goes from here//
int main()
{
	//declaring the variables//
	int a, b, num1, num2;

	//Read the two numbers from the user//
	printf("Enter the two numbers \n");
	scanf("%d%d", &a, &b);
	swap(&a, &b);
	printf("After swapping : a = %d, b = %d\n", a, b);
}
