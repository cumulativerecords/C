/* Memory test of planets program, command line arguments*/
#include <stdio.h>
#include <string.h>
#define NUM_PLANETS 9

int main(int argc, char *argv[])
{
  //init and def planet array of pointers
  char *planets[] = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Uranus", "Neptune", "Pluto"};
  //declare for loop vars
  int i, j;
  //for loop one, reads argv input into comparison loop
  for (i = 1; i < argc; i++)
  {
    //for loop two, compare and print
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
