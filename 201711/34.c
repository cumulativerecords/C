/* Functions for fun */

#include <stdio.h>

int square(int n)
{
  return n * n;
}

int main ()
{
  double x = 3.0;
  printf("Enter number to square:\n");
  scanf("%lf", &x);
  printf("Square: %d\n", square(x));

  return 0;
}

