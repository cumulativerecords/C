/* Accept input from multiple entries
 not comma separated
 average the numbers together
 convert the mean to celsius temperature
*/

#include <stdio.h>


int main()
{
	int a, b, c, d; 
	float avg, celsius;
	printf("Enter four numbers\n");
	scanf("%d %d %d %d", &a, &b, &c, &d);
	printf("You entered %d %d %d %d\n", a, b, c, d);
	avg = (a + b + c + d) / 4;
	printf("%-3.3f is the average.\n", avg);
			
	printf("Converting to celsius...\n");
	celsius = (avg * (5/9));

	printf("Celsius = %3.6f \n Thanks for playing!", celsius);

	return 0;
}
