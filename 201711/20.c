/* if statement with an else clause */

#include <stdio.h>

int main()
{
	int i = 7, j;
	int max;
			
	printf("enter number:");
	scanf("%d", &j);
	if (i > j)
		max = i;
	else 
		max = j;
	printf("%d", max);

	return 0;

}
