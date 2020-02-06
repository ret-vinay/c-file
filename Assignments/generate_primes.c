
//Program to generate primes upto limit//

#include<stdio.h>
#include<math.h>
int main()
{

	//Declaring the variables//
	int i, j, k = 0, l, n, mul, mul2i, size;
	float sqt;
	char ch;

	//Enter the size of array//
	do
	{
		printf("Enter the number size of array\n");
		scanf("%d", &n);
		int a[n];

		sqt = sqrt(n);
		size = n - 1;

		//Validate the size of array if size of array is invalid then print the error message and exit from the program//
		if ( n <= 1 || n > 1000 )
		{
			printf("Error : Entered size is not valid\n");
			return 1;
		}

		//Print the elements of array//
		printf("The elemts of array are\n");
		for ( i = 1; i <= n -1; i++)
		{
			a[i] = i + 1;
			printf("%d\t", a[i]);
		}
		printf("\n");

		//check the prime numbers for given range and print//
		printf("The prime numbers are \n");

		for ( i = 2; i <= sqt; i++)
		{
			for ( k = 2; k <= n; k++ )
			{
				mul = i * k;
				for ( j = 0; j <= n; j++ )
				{
					//Compare the multiplied value with array if its equals then array of that elemnts will be zero//
					if( mul == a[j] )
					{
						a[j] = 0;
					}
				}
			}
		}

		//Print all prime numbers for given range//
		for ( i = 1; i < n; i++ )
		{
			if ( a[i] != 0 )
			{
				printf("%d\t", a[i]);
			}
		}
		printf("Want to continue press Y/y or N/n \n");
		scanf("\n%c", &ch);
		printf("\n");
	}while ( ch == 'Y' || ch == 'y' );
	return 0;
}
