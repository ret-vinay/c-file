
#include<stdio.h>

double average(int *ptr, int n )
{
	double avg;
	avg = (double)sum_elements(ptr, n) / n;
	return avg;
}

//Function definition for sum of elements//
int sum_elements( int *arr, int size )
{
	int i, sum = 0;
	for (i = 0; i < size; i++)
	{
		sum += (*(arr + i ));
	}
	return sum;
}

//Main function goes from here//
int main()
{
	float res;
	int a[5] = { 1, 2, 3, 4, 5};
	res = average(a, 5);
	printf("%f\n", res);

}
