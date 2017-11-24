/*If else expresio with simple math */
#include <stdio.h>

int main()
{
	int i = 0, j=5;
	printf("Enter number:");
	scanf("%d", &i);
	
	if (i<j)
	 	printf("%d i smaller", i);
	else if (i == j)
		printf("%d equivalent to %d", i, j);
	else 
		printf("%d is bigger than %d", i, j);
	return 0;
}
	
