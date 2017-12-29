/* 4p program with closing function, error message */
#include <stdio.h>
#include <string.h>
#
#define NUM_PLANETS 9

//closing function declaration
void closing(void);

int main (int argc, char *argv[])
{
  //process bad input first
//  while (argc < 2)
  while (argv[1] == NULL)
  {
    printf("Usage: ./50 string1 string2 ...\n");
    return 1;
  }
  // declare planets array, loop vars
  int i, j = 0;
  char *planets[] = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune", "Pluto"};
  
  // for loops begin
  for (i = 1; i < argc; i++)
  {
 //  printf("i == %d\n", i);
    for (j = 1; j < NUM_PLANETS; j++)

     //printf("j == %d\n", j);

      if (strcmp(argv[i], planets[j]) == 0)
      {
        printf("%s is planet %d\n", argv[i], j + 1);
	break;
      }
      if (j == NUM_PLANETS)
	printf("%s is non-planetary, string length of %lu\n", argv[i], strlen(argv[i]));
  }
  closing();
}

void closing(void)
{ puts("Adieu!"); }
