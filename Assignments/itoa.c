/*******************************************
	Program to print i to a 
*******************************************/

#include<stdio.h>

void itoa(char str[], int num)
{
	int n, i, rem, len = 0;
	n = num;
	while ( n != 0)
	{
		len++;
		n /= 10;
	}

	for ( i = 0; i < len; i++)
	{
		rem = num % 10;
		num = num / 10;
		str[len - (i + 1)] = rem + '0';
	}
	str[i] = '\0';
}

int main()
{
	int num;
	char str[100];

	printf("enter the number\n");
	scanf("%d", &num);
	itoa(str, num);
	puts(str);
}
