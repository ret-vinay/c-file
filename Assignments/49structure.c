/************************************************************************
Program for record of the students marks
************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define maxlen 100	//macro define for maxlen & subjects
#define subjects 10


//typedefined structure for recor of students
typedef struct 
{
	char name[maxlen];
	int marks[subjects];
	int total;
	float average;
}record;


//the function definition for studentinfo
void studentinfo(record *student, int strength, int sub)
{
	int i, j;

	//loop will run till size of strength
	for(i = 0; i < strength; i++)
	{
		printf("enter the name of students\n");		//read name of students
		scanf("%s", student[i].name);
		student[i].total = 0;				//initialize totel to zero

		printf("Enter the marks\n");			//enter the marks
		for(j = 0; j < sub; j++)
		{
			scanf("%d", &student[i].marks[j]);		//read the marks 
			student[i].total += student[i].marks[j];	//calculate the total marks
		}
		student[i].average = (float)student[i].total / sub;	//calculate the average of marks
	}
}

//function definition for print the record
void printrecord(record *student, int strength)
{
	int i;
	for(i = 0; i < strength; i++)
	{
		//print the name, total marks and average of marks
		printf("Name is = %s\n", student[i].name);	
		printf("total is =  %d\n", student[i].total);
		printf("average is =  %lf\n", student[i].average);
		puts("");
	}
}


//function definition for main is goes from here
int main()
{
	int i, j, strength, sub;

	//read th strength and subjects
	printf("enter the strength of class\n");
	scanf("%d", &strength);

	printf("enter the subjects\n");
	scanf("%d", &sub);

	record *student = malloc(strength * sizeof(record));		//allocate mem dynamically

	studentinfo(student, strength, sub);			//function call for studentinfo
	printrecord(student, strength);				//function call for print record

	return 0;
}


