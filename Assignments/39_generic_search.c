/***********************************************************************
Program for generic search usin macro
***********************************************************************/

#include<stdio.h>
#include<stdlib.h>


//Macro definition for sort elements
#define sort_ele(type, ptr, size)\
{\
	type temp;\
	int i, j;\
	for(i = 0; i < size; i++)\
	{\
		for(j = i + 1; j < size; j++)\
		{\
			if( ((type *)ptr)[i] > ((type *)ptr)[j] )\
			{\
				temp = ((type *)ptr)[i];\
				((type *)ptr)[i] = ((type *)ptr)[j];\
				((type *)ptr)[j] = temp;\
			}\
		}\
	}\
}

//function definition for generic search
void generic_search(void *ptr, int size, int op)
{
	//declare all datatype variable 
	int num, i, index, flag;
	char ch;
	float f1;
	double d1;

	//switch to specific function
	switch(op)	
	{
		case 1 :
			ptr = (int *)malloc(size * sizeof(int));	//allocate memory dynamically
			printf("enter the elements\n");
			for(i = 0; i < size; i++)
			{
				scanf("%d", ( ((int *)ptr) + i) );	//read the elemets
			}
			sort_ele(int, ptr, size);			//function call for sort elements
			printf("print the sorted elements\n");
			for(i = 0; i < size; i++)
			{
				printf("%d\t", *(((int *)ptr) + i));	//print the elements
			}
			puts("");
			printf("enter the element to search in array\n");	//enter the elemnt to search
			scanf("%d", &num);

			//search the elment
			for(i = 0; i < size; i++)
			{
				if(num == *(((int *)ptr) + i))	//if value matches then print that value
				{
					index = i;
					flag = 1;
					break;
				}
			}
			(flag == 1) ? printf("the element %d is found at position %d\n", num, index) : printf("the element is not found\n");
			
			//free ptr
			if(ptr != NULL)
			{
				free(ptr);
				ptr = NULL;
			}
			break;
		case 2 :
			ptr = (char *)malloc(size * sizeof(char));	//allocate memory dynamically
			printf("enter the %d elements of char type \n", size);
			fflush(stdin);
			getchar();
			puts("");
			for(i = 0; i < size; i++)
			{
				scanf("%c", ( ((char *)ptr) + i) );	//read the elemets
			}
			sort_ele(char, ptr, size);		//function call for sort elements
			printf("print the sorted elements\n");
			for(i = 0; i < size; i++)
			{
				printf("%c\t", *(((char *)ptr) + i));		//print the elements
			}
			getchar();
			puts("");
			printf("enter the element to search in array\n");	//enter the elemnt to search
			scanf("%c", &ch);

			//search the elment
			for(i = 0; i < size; i++)
			{
				if(ch == *(((char *)ptr) + i))
				{
					index = i;
					flag = 1;
					break;
				}
			}
			(flag == 1) ? printf("the element %c is found at position %d\n", ch, index) : printf("the element is not found\n");
			
			//free ptr
			if(ptr != NULL)
			{
				free(ptr);
				ptr = NULL;
			}
			break;
		case 3 :
			ptr = (float *)malloc(size * sizeof(float));		//allocate memory dynamically
			printf("enter the %d elements of float type\n", size);
			for(i = 0; i < size; i++)
			{
				scanf("%f", ( ((float *)ptr) + i) );		//read the elemets
			}
			sort_ele(float, ptr, size);				//function call for sort elements
			printf("print the sorted elements\n");
			for(i = 0; i < size; i++)
			{
				printf("%f\t", *(((float *)ptr) + i));		//print the elements
			}
			puts("");
			printf("enter the element to search in array\n");	//enter the elemnt to search
			scanf("%f", &f1);

			//search the elment
			for(i = 0; i < size; i++)
			{
				if(f1 == *(((float *)ptr) + i))
				{
					index = i;
					flag = 1;
					break;
				}
			}
			(flag == 1) ? printf("the element %f is found at position %d\n", f1, index) : printf("the element is not found\n");
			
			//free ptr
			if(ptr != NULL)
			{
				free(ptr);
				ptr = NULL;
			}
			break;
		case 4 :
			ptr = (double *)malloc(size * sizeof(double));		//allocate memory dynamically
			printf("enter of %d the elements of double type\n", size);
			for(i = 0; i < size; i++)
			{
				scanf("%lf", ( ((double *)ptr) + i) );		//read the elemets
			}
			sort_ele(double, ptr, size);			//function call for sort elements
			printf("print the sorted elements\n");
			for(i = 0; i < size; i++)
			{
				printf("%f\t", *(((double *)ptr) + i));		//print the elements
			}
			puts("");
			printf("enter the element to search in array\n");	//enter the elemnt to search
			scanf("%lf", &d1);

			//search the elment
			for(i = 0; i < size; i++)
			{
				if(d1 == *(((double *)ptr) + i))
				{
					index = i;
					flag = 1;
					break;
				}
			}
			(flag == 1) ? printf("the element %f is found at position %d\n", d1, index) : printf("the element is not found\n");
			
			//free ptr
			if(ptr != NULL)
			{
				free(ptr);
				ptr = NULL;
			}
			break;
	}
}


//the function definition for main is goes from here
int main(int argc, char *argv[])
{
	int i, size, op;
	char ch1;
	void *ptr;

	//check error
	if(argc == 1)
	{
		printf("ERROR: Enter the size of array using command line arguments\n");
		exit(1);
	}
	else
	{
		do
		{
		size = atoi(argv[1]);	//convert ascii to int

		//select the option
		printf("Select the option\n 1-int\n 2-char\n 3-float\n 4-double\n");
		scanf("%d", &op);

		generic_search(ptr, size, op);		//function call for generic search

		printf("enter the option Y/y to continue or N/n to stop\n");		//read the option to continue or to stop
		scanf("\n%c", &ch1);
		}while(ch1 == 'Y' || ch1 == 'y');
	}
	return 0;
}

