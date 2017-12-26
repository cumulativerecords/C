/*4p*/
#include <stdio.h>
#include <string.h>
#
#define NUM_FOODS 5
void 
goodbye(void);
/* main function with command line arguments */
int main (int argc, char *argv[])
{
  /* initialize the array of foods */
  char *foods[] = { "crackers", "eggs", "cheese", "pasta", "doritos"};

  int j = 0;
  /* for loops to step through input, initialize variables in loops */
  for ( int i = 1; i < argc; i++)
  {
    for (j = 0; j < NUM_FOODS; j++)
      if (strcmp(argv[i], foods[j]) == 0)
      {
	printf("%s is food %d\n", argv[i], j + 1);
	break;
      }
      if (j == NUM_FOODS)
	printf("%s is inedible\n", argv[i]);
  }

goodbye();

}

void goodbye(void)
{ puts("Wow! Adios!\n"); }
