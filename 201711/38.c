/* Array funtime
* Declare and initialize array at the same time
* print the array using array name as a pointer
*/
#include <stdio.h>
#define STR_LEN 10

int main()
{
  int arr[10] = { [3] = 24, [4] = 30, [7] = 6 };
  int *p, sum = 0;
  
  for (p = arr; p < arr + 10; p++)
	{
	  //sum += *p;
	  printf(" %d", *p);
	}
  printf("\n");    
  
  return 0;
}
