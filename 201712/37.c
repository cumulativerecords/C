/* 4p */
#include <stdio.h>
#include <string.h>
#
#define NUM_PLANETS 9

// greeting
void
greeting(void);
//command line arguments with main 
int main (int argc, char *argv[])
{ 
  char *planets[] = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune", "Pluto"};
  int i, j;
  //greeting
  greeting();
  
  
  //for loop to bring in the arguments
  for (i = 1; i < argc; i++)
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

  return 0;
}

void
greeting(void)
{
  puts("Hello!\n");
}


