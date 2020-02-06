/*********************************************************************** 
Program for copy one file to other file
 *********************************************************************/

#include <stdio.h>


//The main function definition goes from here
int main()
{
    char *filename = "/etc/hosts";
    char *dest_file = "/tmp/myhosts.txt";
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
    	return 1;
    }

    // Open the dest file
    fdest = fopen(dest_file, "w");

    // Check for error
    if (fdest == NULL)
    {
    	perror("fopen");
    	fprintf(stderr, "ERROR: Unable to open file %s\n", dest_file);
    	return 1;
    }
    // Read and print the file contents

    // Read a char from file
    ch = fgetc(fptr);
    while (ch != EOF)
    {
    	// Write the char to dest file
    	write_err = fputc(ch, fdest);
	if (write_err == EOF) //Check whether error occured
	{
	    fprintf(stderr, "ERROR: Unable to write to file %s\n", dest_file);
	    goto ERR;
	}
    	//Read the next char
	ch = fgetc(fptr);
    }

    if ((ch == EOF) && ferror(fptr)) //Check whether error occured
    {
    	fprintf(stderr, "ERROR: Unable to read file %s\n", filename);
    }

ERR:
    // Close the file
    fclose(fptr);
    fclose(fdest);

    return 0;
}
