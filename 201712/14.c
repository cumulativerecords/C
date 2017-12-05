/* 4p: program parameters practice problem */
#include <stdio.h>
#include <string.h>
#
#define NUM_PLANETS 9

//int main function call with program parameters
int main (int argc, char *argv[])
{
  //initialize and define array of pointers to strings for planets
  char *planets[] = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune", "Pluto"};
  //ints for the loops
  int i, j;
  //for loop to read argv from command lline into program comparison function
  for (i = 1; i < argc; i++)
  {
    //for loop to compare command line input to elements in array of pointers to strings
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
