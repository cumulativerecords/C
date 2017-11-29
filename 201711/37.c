/* Array sum
* Declare and initialize array at the same time
* Print the array  using array name as a pointer
* Loop the array with a for loop
* print the sum with another for loop
* add a new line at the end
* reverse the string and print backward
* print sum of squares
*/
#include <stdio.h>
#define LEN 10

int main()
{
  //Declare and initialize the array at the same time  
  int arr[10] = { 4, 23, 3, [3] = 24, [4] = 30, 82, 7, [7] = 6, 9, 7 };
  //Declare a pointer to use in the for loops
  int *p, sum = 0, square = 0, sumsq = 0;
  //Use for loop for printing the array
  printf("List of what is in the array\n");

  for (p = arr; p < arr + LEN; p++)
 	{
	  printf(" %d", *p);
	}
 
  //Print reverse of the array
  printf("\n \n Now to reverse the array:\n");
  for (p = arr + 9; p >= arr; p--)
	{
	  printf(" %d", *p);
	}
  printf("\n");
  
  //Run for loop to step through array and print sum
  for (p = arr; p < arr + LEN; p++)
	{
	  sum += *p;
	}
  printf("\n\n And the sum total of array elements is: %d \n", sum);
 
  //Run for loop to print a table of squares of the array
  printf("Printing a table of squares\n");
  for (p = arr; p < arr + LEN; p++)
	{
	  square = *p * *p;
	  printf("%d \n", square);
	  sumsq += square;
	}

  //Print the sum of squares from the table above.
  printf("Printing the sum of squares: %d\n", sumsq);

  return 0;
}
