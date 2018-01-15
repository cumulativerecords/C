/* 4p */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#
#define NUM_PLAN 9

int main (int argc, char *argv[])
{
  //array of pointers to planet names
  char *planets[] = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune", "Pluto"};
  int j = 0;
  //error checking if no arguments
  while (argc < 2)
  {
    printf("Usage: ./09 string1 string2 etc...\n");
    return 1;
  }

  //for loops to check input
  for (int i = 1; i < argc; i++)
  {
  //inner loop compares input to planet names
    for (j = 0; j < NUM_PLAN; j++)
      if (strcmp(argv[i], planets[j]) == 0)
      {
        printf("%s is planet %d\n", argv[i], j + 1);
        break;
      }
      if (j == NUM_PLAN)
        printf("%s is something else\n", argv[i]);
   }
}
