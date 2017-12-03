/* A fourth planets.out*/
#include <stdio.h>
#include <string.h>
#define NUM_PLANETS 9

//start int main with program parameters
int main (int argc, char * argv[])
{
  //declare char array of pointers for planet
  char *planets[] = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune", "Pluto"};
  //declare vars for the for loops
  int i, j;
  //first for loop for the argc count to read input from CLI into for loop
  for (i = 1; i < argc; i++)
    {  
    //second for loop, stepping through a comparison operator to compare strings and report
      for (j = 0; j < NUM_PLANETS; j++)
    //no second brace here
    //if strcmp then print condition
        if (strcmp(argv[i], planets[j]) == 0)
        {
 	  printf("%s is planet %d.\n", argv[i], j + 1);
	  break;
	}
     //if == num planets
	if (j == NUM_PLANETS)
	  printf("%s is not a planet.\n", argv[i]);
     //close the for loop bracket
     }
  return 0;
} 
