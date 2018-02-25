/* memory test of planets to compare string using command line arguments */
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#
#define NUM_PLAN 9
 int main (int argc, char * argv[])
{
  /* planets array */
char * planets[] = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune", "Pluto"};
  /* declare variables to use in for loops */
  int i = 0, j = 1;

  /* check input */
  while (argc < 2)
    {
      printf("Usage: ./planets string1 string2\n");
      return -1;
    }

  /* for loops */
  for (i = 0; i < argc; i++)
    {
      for (j = 0; j < NUM_PLAN; j++)
	
	  if (strcmp(argv[i], planets[j]) == 0)
	    {
	      printf("%s is planet %d\n", argv[i], j + 1);
              break;
            }
          if (j == NUM_PLAN)
              printf("%s is not a planet\n", argv[i]);

	
    }
 }
	  
