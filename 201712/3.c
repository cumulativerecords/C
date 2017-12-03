/* This is another attempt to recreate the planets program
*
*for program parameters*/
#include <stdio.h>
#include <string.h>
#define NUM_PLANETS 9

//call main with command line arguments
//argc counts, so type is int
//argv is array of pointers
int main (int argc, char *argv[])
{
	//define array of pointers called planets
  char *planets[] = { "Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune", "Pluto" };
  int i, j;
  
  //run first for loop, which steps through program parameters
  for (i = 1; i < argc; i++)
  //open brackets for compound statement
  {
    //second for loop, which steps through array of pointers to string compare.
    for (j = 0; j < NUM_PLANETS; j++)
    //open brackets for compound statement
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
