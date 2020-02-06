/***************************************************************
Program to find the 8 consecutive memory 
***************************************************************/
#include<stdio.h>
#include <stdlib.h>

int indx[10], size[10], opt[10], i = 0, count = 0, k = 0;	//declare variable globally

//function definition to check free space
int check_for_free_space(int n)
{
    int j = 0, sum = 0;
    for(j = 0; j < count; j++)
    {
	sum += size[j];		//add sum with size of elemnts
    }
    if((sum + n) <= 8)		//limit for space 
	return 1;
    else
	return 0;
}

//function definition for add elemnts
void add_element(void *ptr, int op)
{
    switch(op)	
    {
	case 1: //for integer value
	      printf("Enter the integer value\n");
	      scanf("%d", (int *)(ptr + i));
	      indx[k] = i;				//position in 8byte memory
	      size[k] = sizeof(int);			//size of datatype
	      opt[k] = 1;				//for elemnts
	      i = i + 4;				//for 4 bytes memory
	      count++;k++;
	      break;
    	case 2: //for char
	      printf("Enter the character \n");
	      scanf("\n%c", (char *)(ptr + i));
	      indx[k] = i;			//position in 8byte memory
	      size[k] = sizeof(char);		//size of datatype
	      opt[k] = 2;			//for no of elemnts
	      i = i + 1;			//for 1 byte memory
	      count++;k++;
	      break;
	case 3: //for float
	      printf("Enter the float value\n");
	      scanf("%f", (float *)(ptr + i));
	      indx[k] = i;			//position in 8byte memory
	      size[k] = sizeof(float);		//size of datatype
	      opt[k] = 3;			//for no of elemnts
	      i = i + 4;			//for 4 bytes memory
	      count++;k++;
	      break;
	case 4: //for double
	      printf("Enter the double value\n");
	      scanf("%lf", (double *)(ptr + i));
	      indx[k] = i;			//position in 8byte memory
	      size[k] = sizeof(double);		//size of datatype
	      opt[k] = 4;			//for no of elemnts
	      i = i + 8;			//for 8 bytes memory
	      count++;k++;
	      break;
}

}

//function definition for display elemnts
void display_element(void *ptr)
{
    int j;
    for(j = 0; j < count; j++)
    {
	switch(opt[j])		//check the no of elemnts
	{
	    case 1: 
		   printf("index(%d) = %d\n",indx[j], *(int *)(ptr + indx[j]));
		   break;
	    case 2: 
		   printf("index(%d) = %c\n",indx[j], *(char *)(ptr + indx[j]));
		   break;
	    case 3: 
		   printf("index(%d) = %f\n",indx[j], *(float *)(ptr + indx[j]));
		   break;
	    case 4: 
		   printf("index(%d) = %lf\n",indx[j], *(double *)(ptr + indx[j]));
		   break;
	}
    }
}

//function definition for remove elemnts
void remove_element(void *ptr, int n)
{
    i = i - size[k];
    count--;
    k--;
}

//function definition for main
int main()
{
    	int op, op1,res, ind;
	void *ptr;
	char ch;
	ptr = (char *)malloc(8 * sizeof(char));
   do
   {
	printf("Enter the operation to perform\n");
	printf("1-Add elements\n2-Remove element\n3-Display element\n4-Exit\n");	//select the option
	scanf("%d", &op);
	switch(op)
	{
		case 1://add element 
			printf("Enter the type you have to insert\n1-int\n2-char\n3-float\n4-double\n");	//select the datatype
			scanf("%d", &op1);
			switch(op1)
			{
			    case 1://for int datatype
				   res = check_for_free_space(sizeof(int));
				   res ? add_element(ptr, op1):printf("Free space is unavailable please remove element\n");
				   break;
			    case 2: //for char datatype
				   res = check_for_free_space(sizeof(char));
				   res ? add_element(ptr, op1):printf("Free space is unavailable please remove element\n");
				   break;
			    case 3: //for float datatype
				   res = check_for_free_space(sizeof(float));
				   res ? add_element(ptr, op1):printf("Free space is unavailable please remove element\n");
				   break;
			    case 4: // for double data
				   res = check_for_free_space(sizeof(double));
				   res ? add_element(ptr, op1):printf("Free space is unavailable please remove element\n");
				   break;
			    
			}
			break;
		case 2: //remove element
			remove_element(ptr, ind);
		//	display_element(ptr);
			break;
		case 3: // display element
			display_element(ptr);
			break;
	}
	
	printf("\nDo you want to continue the process ? press [y/n]\n");
	scanf("\n%c", &ch);
   }while(ch == 'y' || ch == 'Y');
}
