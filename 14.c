/* if then else statements */

#include <stdio.h>

int main()
{
	int x, y;
	printf("Enter a number for x: \n");
	scanf("%d", &x);
	printf("Enter a number for y: \n");
	scanf("%d", &y);

	if (x < y)
		printf("That's not a big enough x. %d is smaller than %d\n", x, y);
	else 
		printf("That's bigger than y. %d is bigger than %d\n", x, y);

	return 0;

}	
