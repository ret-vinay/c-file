/********************************************************************
Program for swap using macro for all datatypes
********************************************************************/

#include<stdio.h>

//Define macro function for swap two values for all datatypes 
#define SWAP(datatype, x, y)\
{\
	datatype temp = x;\
	x = y;\
	y = temp;\
}

//The function definition for main goes from here
int main()
{
	//Declare the variables
	int a = 2, b = 3;
	SWAP(int, a, b);		//Function call for swapping
	printf("Int : After swapping = %d %d\n", a, b);			//Print after swapping
	
	float f1 = 2.5, f2 = 3.5;	
	SWAP(float, f1, f2);		//Function call for swapping
	printf("float : After swapping = %f %f\n", f1, f2);		//Print after swapping
	
	char ch1 = 'a', ch2 = 'b';
	SWAP(char, ch1, ch2);		//Function call for swapping
	printf("char : After swapping = %c %c\n", ch1, ch2);		//Print after swapping
	
	double d1 = 5.55, d2 = 6.66;
	SWAP(double, d1, d2);		//Function call for swapping
	printf("double : After swapping = %lf %lf\n", d1, d2);		//Print after swappingi

	return 0;
}
