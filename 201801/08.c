/* 4p */
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#
#define NUM_PLANETS 9

int main (int argc, char *argv[])
{
 //define array of pointers
 char *planets[] = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune", "Pluto"};
 //define var for inner loop
 int j = 0;
 //check input
 while (argc < 2) 
 {
   printf("Usage: ./08 string1 string2\n");
   return 1;
 }
  
 //enter outer loop to step through argv entries
 for (int i = 1; i < argc; i++)
 {
   //enter inner loop to compare strings
   for (j = 0; j < NUM_PLANETS; j++)
     if (strcmp(argv[i], planets[j]) == 0)
      {
	printf("%s is planet %d\n", argv[i], j + 1);
	break;
      }
     if (j == NUM_PLANETS)
	printf("%s is something else\n", argv[i]);
  }
}

