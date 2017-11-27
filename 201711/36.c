/*Sum a series of numbers
* This is from King book pg. 102
*/
#include <stdio.h>

int main()
{
  int n, sum = 0;
  printf("Enter a series of integers. Enter 0 to terminate: ");
  scanf("%d", &n);
  while (n != 0) 
	{
	  sum += n;
	  scanf("%d", &n);
  	}
  	printf("The sum is: %d\n", sum);
  return 0;
}

