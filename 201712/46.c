/* caesar's cypher -- rough attempt at daybreak */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "cs50.h"

/* call main with command line arguments of program name
* and number of letter shift positions */

int main (int argc, char *argv[])
{
  /* check for argc == 2 or return error */
  if (argc < 2)
    {
      printf("Error: Not enough command line arguments.\n");
      return 1;
      //some error message should go here
    } 
  if (argc > 2)
    {
      printf("Error: Too many command line arguments.\n");
      return 1;
      //some other error message output here
    }

   /* now convert *argv[] from a number of type char to type int */
   // argv[2] must be non-negative integer
//   if (argv[2] < 0)
//    {
//      printf("Error: Must be positive integer\n");
//      return 1;
//    }
   
   int k = atoi(argv[1]);
   // let's assume the above line had proper syntax.
   // it should have assigned value of argv[2] to int k.
   printf("You said to shift by: %d units.\n", k); 
   /* Now prompt user for input. */
       
   printf("Enter your string in plaintext:\n");
   char * str = NULL;
   scanf("%s", str);
   //string str = get_string("Enter string: ");
    // ensure string was read
   

// if (str == NULL)
//    {
//        return 1;
//    }


   /* strlen from string.h */
 //  int n;
   int n = 0;
   printf("Checkpoint: printing zero value before length of string: %d\n", n);   
   n = strlen(str);
   printf("Checkpoint: printing string length: %d\n", n);
   /* cs50 has a custom function for strings. Can't remember from notes or lecture.
   * basic idea is to get one character of the string, add the cypher shift
   * value, modulus for remainder of 26. 
   * Then print. That's all. */
   //Using i in array to step through elements. 
   for (int i = 0; i < (n-1); i++)
     {
       i += k;
       i = (i % 26);
       printf("%c", str[i]);
     }
     printf("\n");
   
  return 0;
}

    /* That should finish the job.
    * Be sure to check that function from cs50 to convert a string to array of characters.
    * Can't recall if the input was supposed to read into a value as a pointer to array of chars. 
    * Seems there was a function somewhere. Anyway, more for tomorrow... */
  
