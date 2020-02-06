#include<stdio.h>

//The main function start from here//
int main()
{
    //Declare the variables//
    int first,second,num,i,sum;
    printf("enter the number for fibnacci \n");
    scanf("%d",&num);
    first=0;
    second=1;
    //Check the condition for number is greater than 0// 
    if ( num > 0)
    {
	//For loop is to check the series for fibb// 
	for ( i = 0; i <= num; i++)
	{
	    if ( i == 0)
	    {
		printf("%d\n",first);
	    }
	    if ( i == 1)
	    {
		printf("%d\n",second);
	    }
	    //Chek the condition for greater than 1 values//
	    else if( num > 1 )
	    {

		//Addition of first and second values//
		sum = first + second;

		//Check the condition for variable sum is less than or equal to number//
		if ( sum <= num )
		{

		    //Swap the values//
		    first = second;
		    second = sum;

		    //Print the fibb for given range//
		    printf("%d\n",second);
		}
	    }
	}
    }

    //For negative values//
    else
    {

	//For loop to check the fibb series//
	for ( i = 0; i >= num; i--)
	{
	    if ( i == 0 )
	    {
		printf("%d\n",first);
	    }
	    else if ( i == -1 )
	    {
		printf("%d\n",second);
	    }

	    //Check the condition for less than -1 values
	    else 
	    {
		sum = first - second;
		if ( sum >= num )
		{

		    //swapping the values//
		    first = second;
		    second = sum;

		    //Print the fibb for given range//
		    printf("%d\n",second);
		}
	    }
	}
    }
    return 0;
}

