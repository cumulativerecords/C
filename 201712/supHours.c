/* more function practice: print a greeting and calculate average*/
 
#include <stdio.h>

void
name_function()
{
  printf("Supervision Hours Calculator\n");
  printf("For independent fieldwork, documenting 5 percent\n");
}

double
fivePercent_function(double a)
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

  //other cases, here a is between 10 and 30.
  a *= .05;
  // Message printed for any input.
  printf("Document %g hours of independent fieldwork supervision for the week.\n", a);
}

int main ()
{
  name_function();

  double i;
  printf("How many hours of fieldwork did the supervisee/mentee/intern work this WEEK?\n");
  scanf("%lf", &i);
  
  fivePercent_function(i);
    
  return 0;
} 
