/*
 *          File: 13.c
 *	    Purpose: Print range of lines from input file to the screen
 * ----------------------------------------------------------------
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#
int main(int argc, char *argv[])
{
  
  /**************************************************************
   *	Declare variables					*
   *								*
   **************************************************************/
  FILE *inputFile;
  char *mode = "r";
  char line[800];
  int activeLine = 0;
  int data;

  inputFile = fopen(argv[3], mode);
  int argvMax, argvMin;

  /* Take command line arguments and convert to integers using atoi(); */
  argvMin = atoi(argv[1]);
  argvMax = atoi(argv[2]);
  printf("Line range start = %d, Line range end = %d\n", argvMin, argvMax);

  /**************************************************************
   *	Return errors 						*
   *								*
   **************************************************************/

  /* Return error message if no arguments entered */
  while (argc < 2)
     {
        puts("Usage: ./13 rangestart rangeend inputFile");
	exit(1);
     }      

  /**************************************************************
   *	Main code						*
   *								*
   **************************************************************/
  /*  Original code here */
  
   /* for loop to step through argv lines entered */
//   for (i = 1; i <= argc; i++)
//   {
   
   /* for loop within the argc loop
    * this steps through line by line and prints in range */
    
   for (activeLine = argvMin; activeLine <= argvMax; activeLine++)
   {
     if (fscanf(inputFile, "%s %d", line, &data) == 2) {
     printf("Printing line %d: %s %d\n", activeLine, line, data);
     
   }

}
//} 
     

  fclose(inputFile);
}
