#include<stdio.h>

//The main function goes from here//
int main()
{
    //declaring the variable//
    int i,j,num;
    //Read the number from the user to print hello world in X format//
    printf("Enter the number \n");
    scanf("%d",&num);

    //validate the input number//
    if ( num < 3 )
    {
	printf("The invalid input \n");
    }
    else
    {
	    //outer loop to print in x format for rows//
	    for(i = 0; i < num; i++)
	    {
		//Inner loop to print column//
		for(j = 0; j < num; j++)
		{
		    //check the rows and column condition to print in particular place//
		    if (j == i || j == num - i - 1)
		    {
			printf("Hello");
		    }
		    else 
		    {
			printf("     ");
		    }
		}
		printf("\n");
	    }
    }
    return 0;
}
