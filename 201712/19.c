/* playing*/
#include <stdio.h>

int main()
{
  int i = 9, j = 10;
  for (i = 0; i < j; i++)
  { 
     printf("%d and counting", i + 1);
     if (i == 3)
        printf("$$$\n");
     else 
        printf("...\n");
  }
  return 0;
}
