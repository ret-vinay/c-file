//Program to find bitwise EVEN or ODD//

#include<stdio.h>
int main()
{
	//declaring the variables//
	int a, result;
	int mask = 1;

	//Read the input from from user//

		printf("Enter the value to verify even or odd for decimal\n");
		scanf("%d", &a);

		//The num is & with mask to find even or odd//
		result = a & mask;
	(result) ? printf("The number is odd ") : printf("The number is Even");
	printf("\n");
	return 0;
}

