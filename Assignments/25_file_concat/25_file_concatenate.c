/*******************************************************************************
program for file concat
*******************************************************************************/

#include <stdio.h>
#include <string.h>

//function declaration
void read_print_file_function(char *);	
void concat_file_function(char *, char *);


char str[100];
char file1[100]; //file in case location
char file2[100];
char file3[100];


//the main function definition 
int main(int argc, int *argv[])
{
    switch(argc)	//check for the comman line arguments
    {
	case 1: // case to read inputs from user and display result on console
	    printf("Enter a string: ");
	    fgets(str, 100, stdin);
	    printf("Entered string: %s", str);
	    break;
	case 2:// case to read input file from input argument and display result on console
	    strcat(file1,(char *)argv[1]);
	    //printf("Entered string: %s\n", file1);
	    read_print_file_function(file1);
	    break;
	case 3:// case to read input files from input arguments and display result on console
	    strcat(file1,(char *)argv[1]);
	    read_print_file_function(file1);
	    strcat(file2,(char *)argv[2]);
	    read_print_file_function(file2);
	    break;
	case 4:// case to copy input files contents from input argument 2 and 3 
	    // and copy their contents to argument 4 which is destination folder
	    strcat(file1,(char *)argv[1]);
	    strcat(file3,(char *)argv[3]);
	    concat_file_function(file1, file3);
	    strcat(file2,(char *)argv[2]);
	    concat_file_function(file2, file3);
	    read_print_file_function(file3);
	    break;
	default:// case if cmd line arguments are more than 4
	    printf("try after some time\n");
	    break;
    }
    return 0;
}

// function to open a file and display its contents on console
void read_print_file_function(char *file1)
{
    FILE *fptr; //File ptr (Also called as file handle)
    // Open the file
    fptr = fopen(file1, "r");

    // Check for error
    if (fptr == NULL)
    {
	perror("fopen");
	fprintf(stderr, "ERROR: Unable to open file %s\n", file1);
	return;
    }

    // Read a char from file
    int ch;
    printf("%s contents: \n", file1);
    ch = fgetc(fptr);
    while (ch != EOF)
    {
	// Print the char to stdout
	putchar(ch);
	//Read the next char
	ch = fgetc(fptr);
    }
    // Close the file
    fclose(fptr);
}

// function to copy contents of source file to destination folder in append mode
void concat_file_function(char *sfile, char *dfile)
{


    char *filename = sfile;
    char *dest_file = dfile;
    int ch; // Store data from file here

    FILE *fptr, *fdest; //File ptr (Also called as file handle and file stream)

    long pos;
    int write_err = 0;

    // Open the Source file
    fptr = fopen(filename, "r");

    // Check for error
    if (fptr == NULL)
    {
	perror("fopen");
	fprintf(stderr, "ERROR: Unable to open file %s\n", filename);
    }

    // Open the dest file
    fdest = fopen(dest_file, "a");

    // Check for error
    if (fdest == NULL)
    {
	perror("fopen");
	fprintf(stderr, "ERROR: Unable to open file %s\n", dest_file);
    }
    // Read and print the file contents

    // Read a char from file
    ch = fgetc(fptr);
    while (ch != EOF)
    {
	// Write the char to dest file
	fputc(ch, fdest);
	if (ferror(fdest)) //Check whether error occured
	{
	    fprintf(stderr, "ERROR: Unable to write to file %s\n", dest_file);
	    write_err = 1;
	    //goto END;
	}
	//Read the next char
	ch = fgetc(fptr);
    }

    if (!write_err && ferror(fptr)) //Check whether error occured
    {
	fprintf(stderr, "ERROR: Unable to read file %s\n", filename);
    }

END:
    // Close the file
    fclose(fptr);
    fclose(fdest);

}
