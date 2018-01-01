/*4p*/
#include <string.h>
#include <stdio.h>
#include "hibye.h"

#define NUM_PLANETS 9

int main (int argc, char *argv[])
{
  //declare char planets
  char *planets[] = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune", "Pluto"};
  //declare int
  int j = 0;
  //error checking for bad input
  if (argc <= 2)
    {
      printf("Usage: ./02 string 1 string2 ...\n");
      return 1;
    }
  hello();
  for (int i = 0; i < argc; i++)
  {
    for (j = 0; j < NUM_PLANETS; j++)
      if (strcmp(argv[i], planets[j]) == 0)
      {
	printf("%s is planet %d\n", argv[i], j + 1);
	break;
      }
      if (j == NUM_PLANETS)
	printf("%s is something else\n", argv[i]);
  }
  goodbye();
}
  
