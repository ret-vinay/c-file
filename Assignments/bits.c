//Program to print in binary form//

#include<stdio.h>
int main()
{
    //declaring the variables//
    int i;
    unsigned int a;
    unsigned int mask = 1 << (sizeof(int) * 8 -1);
    unsigned int bits = sizeof(int) * 8;

    //Read the input from from user//
    printf("Enter the value to print in binary\n");
    scanf("%x", &a);
  
    //Loop used to check all bits to print //
    for( i =0; i < bits; i++)
    {
	//Calculate the result value by anding the a with mask//
	int res = a & mask;

	//If the result is 0 then print the false else true bit//
	if ( res == 0)
	{
	    putchar('0');
	}
	else
	{
	    putchar('1');
	}

	//Shift the mask value//
	mask = mask >> 1;
    }
    printf("\n");
    return 0;
}

