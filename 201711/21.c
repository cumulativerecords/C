/* if statement with else clause that returns a minimum value */

#include <stdio.h>

int main()
{
	int i, j, min;
	
	// Get input from user
	printf("Enter a number:\n");
	scanf("%d", &i);
	printf("Now a number to compare:\n");
	scanf("%d", &j);
	
	// Evaluate
	if (i < j)
		min = i;
	else if (i > j)
		min = j;
	else 
		printf("No, those are the same numbers.\n");	

	printf("%d is the smaller number.\n", min);

	return 0;

}	
