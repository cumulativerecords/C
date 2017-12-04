/* 4p drill: program parameters practice problem*/

#include <stdio.h>
#include <string.h>
#
#define NUM_PLANETS 9

//call main with program parameters
int main(int argc, char *argv[])
{
  //declare array for planets
  char *planets[] = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune", "Pluto"};
  //declare vars for the loops
  int i, j;
  
  //create first loop using standard command line arguments form
  for (i = 1; i < argc; i++)
  {
    //second loop to compare input to planets array items
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
