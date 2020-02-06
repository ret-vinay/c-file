//Check the given number is perfect or not//

#include<stdio.h>
int main()
{
    //declaring the variables//
    int num,i,sum=0;

    //Enter the number to check perfect or not//
    printf("enter the number \n");
    scanf("%d",&num);

    //Loop will be used to check all possible condition//
    for ( i = 1; i < num; i++ )
    {
	//check condition that variable i is devide by num and the reminder is equal to 0//
	if ( num % i == 0 )
	{
	    sum = sum + i;
	}
    }

    //Check the value of sum is equal to given number//
    if ( sum == num )
    {
	printf("The number is perfect %d", num);
    }
    else
    {
	printf("the number is not perfect %d",num);
    }
    printf("\n");
    return 0;
}
