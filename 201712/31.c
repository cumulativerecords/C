/* Code practice */
#include <stdio.h>
#include <string.h>
#
#define NUM_PLANETS 9


int main (int argc, char *argv[]) /* Using command line arguments */
{
  char *planets[] = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune", "Pluto"}; /* array of planets to check for matching strings */

  int i, j; /* vars for the loops */
  
  for (i = 1; i < argc; i++)
   /* first for loop steps through command line arguments */
  {
    for (j = 0; j < NUM_PLANETS; j++)
      if (strcmp(argv[i], planets[j]) == 0)
	{ 
	  printf("%s is planet %d.\n", argv[i], j + 1);
	  break;
	}
      if (j == NUM_PLANETS)
	  printf("%s is not a planet.\n", argv[i]);
  }
  
  return 0;
} 
