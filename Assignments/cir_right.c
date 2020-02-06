
/***********************************************************************************************************
  program for circular right shift
 ************************************************************************************************************/

#include<stdio.h>
int main()
{
	int i, num, pos, result, m = 1; 
	unsigned mask = 1;

	printf("Enter the number and location to shift : \n");
	scanf("%x%d", &num, &pos);
	m = 1 << ((sizeof(int) * 8 ) - 1 );
	for ( i = 0; i < pos; i++)
	{
		if ( num & mask )
		{
			num = num >> 1;
			num = num | m;
		}
		else
		{
			num = num >> 1;
			if( num & m )
			{
				num = num ^ m;
			}
		}
	}
	display(num);
}

int display(int result)
{
	unsigned int i, mask = 1 << ((sizeof(int) * 8 ) - 1 );
	for ( ; mask; mask >>= 1 )
	{
		( result & mask ) ? putchar ('1') : putchar('0');
	}
	printf("\n");
}


