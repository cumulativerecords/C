/*
 *          File: 12.c
 *	    Purpose: Print range of lines from input file to the screen
 * ----------------------------------------------------------------
 */

#include <stdio.h>
#include <stdlib.h>
#
int main(int argc, char *argv[])
{
  FILE *ifp;
  char *mode = "r";
  char line[80];  /* One extra for nul char. */
  int digit = 0;  

  ifp = fopen("in.list", mode);

  if (ifp == NULL) {
    fprintf(stderr, "Can't open input file in.list!\n");
    exit(1);
  }

  /*  Original code here */
  
     while (fscanf(ifp, "%s %d", line, &digit) == 2) {  
     printf("%s  %d\n", line, digit);
     }
   
 
  /* Experimental code here 
   * Pseudocode:
   * for first line of argc 2
   * loop through and print lines
   * until end of argc 3
   * for file specified in argc4
   */
  
  /*  for (int i = 0, argc = 2; argc == 3; i++) 
   * {
   *   printf("%s\n", argv[i]);
   * }
   */

      
   
    
  fclose(ifp);
//  fclose(ofp);

}
