/*same planets program just to memorize*/
#include <stdio.h>
#include <string.h>
#define NUM_PLANETS 9

int main(int argc, char *argv[])
{
  //declare array and vars for the loops
  char *planets[] = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune", "Pluto"};
  int i, j;
  
  //for loop to step through cli input, read into the next loop and terminate at null char.
  for (i = 1; i < argc; i++)
  //curly braces
  {
    //second for loop to process comparison and print response
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
