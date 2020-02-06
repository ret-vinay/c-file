/***************************************************************************
  Program for printf function for all data types
 **************************************************************************/

#include<stdio.h>
#include<stdarg.h>
#include<string.h>

//The function definition for printf is as follows
void my_printf(const char *format, ...)
{
	va_list ap;		//variable arguments list declaration
	char buff[50], ch;	//buffer is used to store the values

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
					sprintf(buff, "%d", va_arg(ap, int));
					fputs(buff, stdout);
					break;
				case 'f' :
					sprintf(buff, "%f", va_arg(ap, double));
					fputs(buff, stdout);
					break;
				case 'c' :
					ch = va_arg(ap, int);
					putchar(ch);
					break;
				case 'l':
					switch(*(++format))		//It will for double and long int
					{
						case 'f' :
							sprintf(buff, "%lf", va_arg(ap, double));
							fputs(buff, stdout);
							break;
						case 'd' :
							sprintf(buff, "%d", va_arg(ap, int));
							fputs(buff, stdout);
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
	int a = 10, b = 5;
	char ch = 'a';
	float fl = 1.5;
	double dl = 7.56;
	long int li = 65000000;

	//Calling all the function for print the value of different datatypes
	my_printf("Int : The value of x is = %d\n", a);
	my_printf("char : The value of ch is = %c\n", ch);
	my_printf("float : The value of x is = %f\n", fl);
	my_printf("double : The value of x is = %lf\n", dl);
	my_printf("Long int : The value of x is = %ld\n", li);
}



