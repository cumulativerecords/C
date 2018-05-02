// Program to convert degrees to radians.
# include <stdio.h>
# include <stdlib.h>

int main (int argc, char *argv[])
{
	//Initialize.
	double degrees;
	double pi = 355/113;
	
	//Tell user what to do.
	printf( "Welcome!\n"
		"This program converts degrees to radians.\n"
		"Enter degrees: ");
	scanf("%lg", &degrees);
	
	//Check input.
//	while (argc > 1) 
//	{
// 		printf("Usage: 000");
//		return -1;
//	};

	//Print number of radians.
	printf("Number of radians: %lg\n", (degrees * (pi/180)));	
	
return 0;
}
