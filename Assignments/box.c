//Program to print the box within the box//

#include<stdio.h>
int main()
{
	int i,j,num,n,mid,m;
	printf("Enter the odd value to print box\n");
	scanf("%d", &n);

	for( i = 1; i <= n; i++ )
	{
		for( j = 1; j <=n; j++ )
		{
			if( i % 2 == 1 && j >= i && j <= n - i + 1 || i % 2 == 1 && j >= n - i + 1 && j >= i || i ==1 || j == 1 || j == n || j % 2 == 1 && i >= j + 1 && i <= n - j || j % 2 == 1 && i >= n - j + 1 && i <= j -1) 
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}

		}
		printf("\n");
	}
}
