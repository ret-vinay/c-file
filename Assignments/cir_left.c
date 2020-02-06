
/***********************************************************************************************************
  program for circular left shift
 ************************************************************************************************************/

#include<stdio.h>

int main()
{
	int num, size, i;
	unsigned mask = 0, m = 1, pos;
	printf("Enter the number and location : \n");
	scanf("%x%d", &num, &pos);

	mask = (~0);
	size = sizeof(int) * 8 - 1;
	printf("size = %d \n", size);
	m = m << size;
	printf("mask %x\n", mask);
	num = num | mask;
	printf("The value is %d \n", num);

	for ( size = size; size >= 0; size-- )
	{
		(num & m ) ? putchar ('1') : putchar('0');
		m = m >> 1;
	}
	printf("\n");
}

