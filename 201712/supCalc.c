/* Supervision calculator using functions to pass values by argument */
 
#include <stdio.h>
 
/* Function declarations before int main() */
void greeting();
double percent_function(double a, int b);



/* main function */
int main ()
{
  greeting();

  double i;
  int j;
  printf("What category?\nEnter '1' for Independent Supervision\nEnter '2' for Practicum\nEnter '3' for Intensive Practicum\n");
  scanf("%d", &j);
  printf("How many hours of fieldwork did the supervisee/mentee/intern work this WEEK?\n");
  scanf("%lf", &i);

/*  while (i < 10)
    {
      printf("That's not enough hours dude!\n");
      break;
    }
*/

  percent_function(i, j);
    
  

  return 0;
} 


/* Greeting function */
void
greeting()
{
  printf("Supervision Hours Calculator\n");
}

/* Calculate Percent function */
double
percent_function(double a, int b)
{
  if ( a < 10 )
    {
      printf("Not enough hours.\n");
      a = 0;
    }
  
  else if ( a > 30 )
    {
      a = 30;
      printf("We'll call that 30 fieldwork hours (maximum allowed for a week of fieldwork).\n You might be working too hard.\n");
    }
  
  /* compute the appropriate percentage based on category specified */
  switch (b)
  { 
    case 1: a *= .05;
	break;
    case 2: a *= .075;
	break;
    case 3: a *= .1;
	break;
  }
  //other cases, here a is between 10 and 30.
 // a *= .05;
  // Message printed for any input.
  printf("Document %g hours of supervision for the week.\n", a);

}

