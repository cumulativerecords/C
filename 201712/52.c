/* greeting and closing header */
#include <stdio.h>
#include <string.h>
#include "hibye.h"
#
#define NUM_PLANETS 9
int main (int argc, char *argv[])
{
  //declare and initialize char array of pointers called planets 
  char *planets[] = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Pluto"};
  int j = 0;
 //error message if not enough arguments entered
 while (argc == 1)
 {
   printf("Usage: ./50 string1 string2 ...\n");
   return 1;
 }
   //for loop
  hello();
  for (int i = 1; i < argc; i++)
  {
  for (j = 0; j < NUM_PLANETS; j++)
    if (strcmp(argv[i], planets[j]) == 0)
    {
      printf("%s is planet %d\n", argv[i], j + 1);
      break;
    }
    if (j == NUM_PLANETS)
      printf("%s is not right\n", argv[i]);
  }

  goodbye();
}

