/*Planets program with command line arguments*/
//King pg. 304 ch. 13 Strings

#include <stdio.h>
#include <string.h>

#define NUM_PLANETS 9

int main(int argc, char * argv[])
{
	char * planets[] = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune", "Pluto"};

	int i, j;

	/********************************************************************************
	 * Nested for loops:	Using program parameters (int argc, char *argv[]).	*
	 * 			First for loop runs argc. 0 = program name, 1 = strings	*
	 * 			, 2 = name of file to run program on (if applicable),	*
	 * 			3 = null character (termination). Argc value counter	*
	 * 			initializes at i = 1 (starting loop at program name).	*
	 * 			Incrementing, i = 2 runs through strings provided.	*
	 * 			i = 3 for this program is a null termination character.	*
	 ********************************************************************************/
	for (i= 1; i < argc; i++) 
	{
	  for (j = 0 ; j < NUM_PLANETS; j++)
	    if (strcmp(argv[i], planets[j])  == 0 ) 
	    {
	      printf("%s is planet %d\n", argv[i], j + 1);
	      break;
	    }
	    if (j == NUM_PLANETS)
	    printf("%s is not a planet\n", argv[i]);
	}
	return 0;

}

