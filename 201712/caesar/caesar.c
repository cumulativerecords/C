/* caesar's cypher, made on my own without looking at other peoples' code! */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "cs50.h"

/* call main with command line arguments of program name
* and number of letter shift positions */

int main (int argc, char *argv[])
{
  /* check for argc == 2 or return error */
  if (argc < 2) {
      printf("Usage: ./caesar k\n");
      return 1;
    }
  if (argc > 2) {
      printf("Usage: ./caesar k\n");
      return 1;
    }
  
  /* Done with command line args above.
   * Now convert argv[2] to integer to run arithmetic on it/
   */
   int k = atoi(argv[1]);
   
   /* Now use cs50 function, get_string input from user.*/
   string s = get_string("plaintext: ");
   /* Assign string input to a variable, p, to represent 
    * character array of plaintext input. */ 
   string p = s;
   if (p == NULL) {
          return 1;
      }
   /* I used to have a section here for string length function.
    * But I run strlen directly in for loop when initializing and defining
    * i (for elements of string array, p) and n (representing strlength as
    * maximum in the for-loop's controlling expression.
    */
    
    int isalpha(int j);
   /* Second section begins, to process and print ciphertext.*/
   printf("ciphertext: ");
   for (int i = 0, n = strlen(p); i < n; i++) 
    {
      while (isalpha(p[i]) != 0)
      {
          
        if (p[i] <= 90)
          {
            p[i] = (p[i] + k % 26);
              {
                  if (p[i] > 90)
                     {
                        p[i] -= 26;
                     }
                printf("%c", p[i]);
               break;
              }
           }  
         
        else if (p[i] >= 97)
           {
              p[i] = (p[i] + k % 26);
              {
                  if (p[i] > 122)
                    {
                        p[i] -= 26;
                    }
                printf("%c", p[i]);
                break;
               }
            }
      }
      
       if (isalpha(p[i]) == 0)
            {
                printf(" ");
            }
    }
     printf("\n");

  return 0;
  
}   
