/*  scanf formatted
 */

#include <stdio.h>

int main()
{
	float tip, tiptotal;
	printf("\nEnter the cost of your meal:$  ");
	scanf("%f", &tip);
	tiptotal = tip * 1.15;
	printf("Then pay %2.2f to cover total with tip. \n", tiptotal);

	return 0;
}
