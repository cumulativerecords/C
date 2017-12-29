/*4p*/
#include <stdio.h>
#include <string.h>
#
#define NUM_PLANETS 9

//declaring the closing function
void closing(void);

//creating a program to check user inp7ut, to see if it matches names of planets
int main (int argc, char *argv[])
{
  //array of pointers for plent names
  char *planets[] = { "Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune", "Pluto"};
  //choosing to declare var "i" in the for loop, not up front
  //must declare and initialize j here to compile
  int j = 0;
  //check bad input, then add error message/instruction if bad input
  
  while (argv[1] == NULL) 
   {
	printf("Usage: ./program_name string1 string2 ...\n "
               "%d is argc\n", argc);
        return 1;
   }
 
  for (int i = 1; i < argc; i++)
  {
    for (j = 0; j < NUM_PLANETS; j++)
      if ( strcmp(argv[i], planets[j]) == 0 )
      {  
	printf("%s is planet %d\n", argv[i], j + 1);
	break;
      }
      if ( j == NUM_PLANETS )
	printf("%s is something else entirely.\n", argv[i]);
  }
 return 0;

 closing();
}

void closing(void)
{  printf("Adieu!\n"); }
   
