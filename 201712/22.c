/* function*/

#include <stdio.h>

int integer(int i);

int main ()
{
  int i;
  printf("Enter an integer:\n");
  scanf("%d", &i);
  
  integer(i);

return 0;
}

int integer(i)
{
  if (i < 10)
  {
    printf("That number is too small.\n");
  }
  else
    printf("That number is big enough.\n");
}
    

