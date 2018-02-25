/* 4p memory test */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#
#define NUM_PLAN 9

int main (int argc, char * argv[])
{
	/* initialize planet array */
	char * planets[] = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune", "Pluto"};
	/* initialize variables for for loops */
	int i = 0, j = 1;
        
	/* Check input */
	while (argc < 2 )
		  {
			  printf("./Usage: 01 string1 string2...\n");
			  return -1;
		  }
	/* Run for loops */
	for (i = 0; i < argc; i++)
	{
	for (j = 1; j < NUM_PLAN; j++)
		if (strcmp(argv[i], planets[j]) == 0)
		{
		printf("%s is planet %d\n", argv[i], j + 1);
		break;
		}
		else if (j == NUM_PLAN )	
		printf("%s is not a planet\n", argv[i]);		
	}
}

