/* Practicing expressions
 */
#include <stdio.h>

int main()
{
	int x, y;
	printf("\nWhat number should we supercharge?");
	scanf("%d", &x);
	printf("Fascinating! You said %d but Computron already incremented it to...\n", x++);
	printf("%d\n", x);
	
	printf("\nWhat number should we shrink?");
	scanf("%d", &y);
	printf("Okay, Computron shrank your %d by half and subtracted one, resulting in ", y);
	y = y / 2;
	printf("%d\n", --y);
	


	return 0;

}

