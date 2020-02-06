//Program to print ASCII characters//

#include<stdio.h>
int main()
{
    //declaring the variable data type//
    int num;

    //Loop is to print all ascii characters within range//
    for ( num = 0; num <= 127; num++ )
    {
	//Check the condition that number is printable or not//
	if ( num >= 33 && num <=126 )
	{
	    //Print the ascii characters//
	    printf("%3d\t %3x\t %3o\t %c\t \n",num,num,num,num);
	}
	else
	{
	    printf("%3d\t %3x\t %3o\t Not printable values\n",num,num,num);
	}
    }
}

