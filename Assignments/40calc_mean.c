/**************************************************************************************
  Program for calculate mean using commandline arguments
 **************************************************************************************/

#include<stdio.h>
#include<stdlib.h>

//Function definition for calculate mean 
void calc_mean(void *ptr, int size, int op)
{
	int i;
	double sum = 0, mean;
	switch(op)		//switch case is for select datatype
	{
		case 1: 
			for(i = 0; i < size; i++)
				sum += *(((int *)ptr) + i);	//For int datatype sum
			break;
		case 2: 
			for(i = 0; i < size; i++)
				sum += *(((char *)ptr) + i);	//For char datatype sum
			break;
		case 3: 
			for(i = 0; i < size; i++)
				sum += *(((float *)ptr) + i);	//for float datatype
			break;
		case 4: 
			for(i = 0; i < size; i++)
				sum += *(((double *)ptr) + i);	//for double datatype
			break;
	}
	mean = sum / size; 	//calculate mean and print
	printf("%lf", mean);
}

//The main function definition goes from here
int main(int argc, char *argv[])
{
	int i, op, size;
	void *ptr;
	char ch;
	do
	{
	if(argc == 1)		//if argc is not given then show error
	{
		printf("Error enter the input through command line arguments\n");
		return 1;
	}
	else
	{
		size = atoi(argv[1]);	//read the size in the form ascii to integer form the user
		printf("size =  %d\n", size);

		//selev=ct the datatype for calculate mean
		printf("select datatype\n 1-int\n 2-char\n 3-float\n 4-double\n");
		scanf("%d", &op);
		switch(op)
		{
			case 1:
				ptr = (int *)malloc(size * sizeof(int));	//Allocate memory for int dynamically
				printf("enter the elements\n");
				for(i = 0; i < size; i++)
				{
					scanf("%d", (((int *)ptr) + i));
				}
				calc_mean(ptr, size, op);			//function call for calculate mean
				break;
			case 2:
				ptr = (char *)malloc(size * sizeof(char));	//allocate memory for char dynamically
				printf("enter the elements\n");
				for(i = 0; i < size; i++)
				{
					scanf("%c", (((char *)ptr) + i));
				}
				calc_mean(ptr, size, op);			//function call for calculate mean
				break;
			case 3:
				ptr = (float *)malloc(size * sizeof(float));	//Allocate memory for float dynamically
				printf("enter the elements\n");
				for(i = 0; i < size; i++)
				{
					scanf("%f", (((float *)ptr) + i));
				}
				calc_mean(ptr, size, op);			//function call for mean
				break;
			case 4 :
				ptr = (double *)malloc(size * sizeof(double));	//allocate memory for double dynamically
				printf("enter the elements\n");
				for(i = 0; i < size; i++)
				{
					scanf("%lf", (((double *)ptr) + i));
				}
				calc_mean(ptr, size, op);			//function call for mean
				break;
		}

	}
	puts("");

	//Select the option to continue or to stop
	printf("enter the option Y/Y to continue or N/n to stop\n");
	scanf("\n%c", &ch);
	}while(ch == 'Y' || ch == 'y');
}

