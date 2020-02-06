
/***************************************************************************
  Program for scanf function for all data types
 **************************************************************************/

#include<stdio.h>
#include<stdarg.h>
#include<stdlib.h>
#include<string.h>

//The function definition for scanf is as follows
void my_scanf(const char *format, ...)
{
	va_list ap;		//variable arguments list declaration
	char buff[100] = "\0", ch;	//buffer is used to store the values
	void *ptr;

	//Start the variadic function with format
	va_start(ap, format);

	//loop will check for not null characters
	while(*format != '\0')
	{
		if(*format != '%')	//it will check for the format specifier and print the charaacters
		{
			putchar(*format);
		}
		else
		{
			//switch function is used for specific datatype
			switch(*(++format))
			{
				case 'd' :
					ptr = (int *)va_arg(ap, int);
					fgets(buff, 100, stdin);
					*((int *)ptr) = atoi(buff);
					break;
				case 'f' :
					ptr = (float *)va_arg(ap, int);
					fgets(buff, 100, stdin);
					*(float *)ptr = atof(buff);
					break;
				case 'c' :
					ptr = (char *)va_arg(ap, int);
					fgets(buff, 100, stdin);
					*((char *)ptr) = (buff[0]);
					break;
				case 'l':
					switch(*(++format))		//It will for double and long int
					{
						case 'f' :
							ptr = (double *)va_arg(ap, int);
							fgets(buff, 100, stdin);
							*((double *)ptr) = atof(buff);
							break;
						case 'd' :
							ptr = (long int *)va_arg(ap, int);
							fgets(buff, 100, stdin);
							*((long int *)ptr) = atoi(buff);
							break;
					}
			}
		}
		format++; //increment the address
	}
	va_end(ap);	//end the variadic function
}


//The main function definition goes from here
int main()
{
	//declare the variable of all data types
	int a;
	char ch;
	float fl;
	double dl;
	long int li;

	//Calling all the function for read the value of different datatypes
	printf("enter the integer number\n");
	my_scanf("%d", &a);

	printf("enter the character\n");
	my_scanf("%c", &ch);

	printf("enter the float number\n");
	my_scanf("%f", &fl);

	printf("enter the double number\n");
	my_scanf("%lf", &dl);

	printf("enter the long integer number\n");
	my_scanf("%ld", &li);

	//Print all the values for difeerent datatypes
	printf("The value of Int is = %d\n", a);
	printf("The value of Char is = %c\n", ch);
	printf("The value of float is = %f\n", fl);
	printf("The value of double is = %lf\n", dl);
	printf("The value of long Int is = %ld\n", li);
}

