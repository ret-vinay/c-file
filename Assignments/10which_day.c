//Program to find the which day//

#include<stdio.h>
int main()
{
    //Declaring the variables//
    int day,num,temp,count;
    char option;

    //Chcecking in the do while loop condition//
    do
    {

	//Select the day for first day from the given day//
	printf("Select the day for first day \n");
	printf("1-Sunday\n2-Monday\n3-Tuesday\n4-Wednesday\n5-Thursday\n6-Friday\n7-Saturday\n");
	scanf("%d", &num);

	//Check the condition for valid input number//
	if( num < 1 || num > 7 )
	{
	    printf("The invalid input number");
	}
	else
	{

	    //read the count from the user to find the day//
	    printf("Enter the number to find the day\n");
	    scanf("%d", &count);

	    //Check the condition for range of count//
	    if ( count < 0 || count > 365 )
	    {
		printf("Enter day id invalid the range id fro 0 to 365");
	    }
	    else
	    {	

		//add the first day with count//
		day = num + count;

		//Find the modulus value for getting day//
		temp = (day % 7);

		//Use the switch case to find the particular day and print the day//
		switch (temp)
		{
		    case 1 : printf("sunday");
			     break;
		    case 2 : printf("Monday");
			     break;
		    case 3 : printf("Tuesday");
			     break;
		    case 4 : printf("Wednesday");
			     break;
		    case 5 : printf("Thursday");
			     break;
		    case 6 : printf("Friday");
			     break;
		    default : printf("Saturday");
			      break;
		}
		printf("\n");
	    }

	    //Check the condition either want to continue or to stop the process//
	    printf("Want to continue ? press [Y/y] | [N/n]");
	    scanf("\n%c",&option);
	}
    }while( option == 'Y' || option == 'y' );
}


