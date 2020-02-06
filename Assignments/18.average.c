/***********************************************************************************************
Program for calculate average in 3 types
1-Userdefined
2-commandline
3-Environment variable
***********************************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<stdarg.h>
#include<string.h>


//function definition for average 
double average(int *ptr, int size)
{
	int i;
	double avg, sum = 0;
	for(i = 0; i < size; i++)
	{
		sum += ptr[i];		//calculate sum 
	}
	avg = sum / size;		//calculate average
	printf("avg = %lf\n", avg);	//print average
}

//The function definition for main is goes from here
int main(int argc, char *argv[])
{
	//declare the variable
	int a[10], i, j, size, op, n, b[10], count = 0;
	double res;
	size = argc -1;		//calculate size using command line

	//if argc count is greater than 1 
	if(argc > 1)
	{
		for(i = 1; i <= size; i++)
		{
			a[i - 1] = atoi(argv[i]);	//read the elemnts from the commandline 
		}
		average(a, size);			//function call for average 
	}

	//if argc is not given through commanline then
	else
	{
		//select the operation for userdefined & Env type
		printf("select the option\n 1-Userdefined type\n 2-Env type\n");
		scanf("%d", &op);

		if(op == 1)
		{
			//enter the size of array 
			printf("enter the array size\n");
			scanf("%d", &n);

			//enter the elements
			printf("Enter the elements of array\n");
			for(i = 0; i < n; i++)
			{
				scanf("%d", &a[i]);
			}
			average(a, n);		//Function call for average
		}
		else
		{
			i = 0, j = 0;
			if(getenv("p"))		//for read env through command line
			{
				char *s_ptr = getenv("p");	//assign env value to ptr
				printf("p = %s\n", s_ptr);
				char *p;

				//loop is skip the delitors
				for( p = strtok(s_ptr, "/"); p != NULL; p = strtok(NULL, "/"))
				{
					b[i] = atoi(p);		//convert the values to integer and store in array
					count++; i++;
				}
				average(b, count);		//function call for average
			}
			else
			{
				printf("environment variable not found\n");	
			}
		}
	}

}


