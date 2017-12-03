/*fifth time writing planets program for command line arguments*/
#include <stdio.h>
#include <string.h>
#define NUM_PLANETS 9

//int main with calls to comand line arguments. specify type and pointer as below
int main(int argc, char *argv[])
{
  //declare char array of pointers for planets, define
  char *planets[] = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune", "Pluto"};
  //Declare i and j for the loops
  int i, j;
  //first for loop steps trhgouh the argc content, reading input into planets loop
  for (i = 1; i < argc; i++)
  {
  //second for loop steps through the planet array to print compared message, not compared
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
