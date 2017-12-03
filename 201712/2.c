/* Trying to make planets program from memory, to practice program parameters*/
#include <stdio.h>
#
#include <string.h>
#
#define NUM_PLANETS 9

//call main with program parameters, declaring argc as int type since it is a counter.
//Remember argv needs * because it is an array of points.
int main(int argc, char *argv[])
{
//Now declare array of pointers for planets, to check against the list from CLI.
	char *planets[] = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune","Pluto"};
	int i, j;

//Now outside loop of argc
  for (i = 1; i < argc; i++)
//Now inside loop with compound statement to step through the arg input.
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
