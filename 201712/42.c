#include <stdio.h>
#include <string.h>
#
#define NUM_PLANETS 9

void
greeting(void);


int main (int argc, char *argv[])
{
  char *planets[] = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune", "Pluto"};
  int i, j;
  
  greeting();

  for (i = 1; i < argc; i++)
  {
    for (j = 0; j < NUM_PLANETS; j++)
      if (strcmp(argv[i], planets[j]) == 0)
	{
 	  printf("%s is planet %d\n", argv[i], j + 1);
	  break;
	}
      if (j == NUM_PLANETS)
          printf("%s ain't no planet.\n", argv[i]);
   }
}

void greeting(void)
{ printf("Hi!\n"); }
