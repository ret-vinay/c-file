/****************************************************************************
Program for transpose of matrix
****************************************************************************/

#include<stdio.h>


//function definition for transpose of matrix
void transpose(int ptr1[10][10], int row, int col)
{
	int i, j;
	puts("after transpose");
	for(j = 0; j < col; j++)
	{
		for(i = 0; i < row; i++)
		{
			printf("%5d", ptr1[i][j]);	//print the elements
		}
		puts("");
	}
}


//the main function goes from here
int main()
{
	int i, j, row, col;
	int mat[10][10], mat2[10][10];

	//read the rows & col of matrix
	printf("enter the row & col of matrix\n");
	scanf("%d%d", &row, &col);

	//read the elemets of matrix
	printf("Enter the elements of 2d array\n");
	for(i = 0; i < row; i++)
	{
		for(j = 0; j < col; j++)
		{
			scanf("%d", &mat[i][j]);
		}
	}

	//print the elements of matrix
	puts("before transpose");
	for(i = 0; i < row; i++)
	{
		for(j = 0; j < col; j++)
		{
			printf("%5d", mat[i][j]);
		}
		puts("");
	}
	transpose(mat, row, col);	//function call for transpose of matrix
}
