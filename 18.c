/* if/then else program to check if a number is greater than 2 */
#include <stdio.h>

int main ()

{
	int i;
	printf("enter a number:");
	scanf("%d", &i);
	
	/*Now analyze the number with conditional */
	//Or comment like this on single line...			

	if (i > 2)
		printf("That's more than 2. Cool.");
	else 
		printf("Nah, dude. That number is too small.");
	return 0;
}
