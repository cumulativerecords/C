/* Seeing how to use if/else for supervision checking input and analyzing documentation amount */

#include <stdio.h>
/*#define SMAXind = 1.5;
*#define SMAXprac = 2.25;
*#define SMAXintprac = 3.0;
*/
 
int main()
{
	float wkField, wkSup, wkSupP, wkSupIP;

	//Get weekly hours from user	
	printf("Supervision Hours Calculator\n This program will calculate how many hours the supervisor should document in a one-week period, based on how many fieldwork hours the supervisee/intern did.\n FOR A ONE-WEEK PERIOD, HOW MANY FIELDWORK HOURS DID SUPERVISEE/INTERN DO?\n Enter number of hours (e.g., 10.25):\n");
	scanf("%f", &wkField);

	//Check input to be at least 10 hours
	if (wkField < 10) {
	   printf("\n\nProblem detected!\nYou said %.2f but that is below the minimum hours required to document supervision. Try again when the supervisee/intern performs 10 to 30 hours of fieldwork in a single week.\n", wkField);
	}
	
	//If max or above, return values for max hours
	//This avoids problem of supervisor doing too many hours
	else if (wkField >= 30) {
	   printf("\n\nYou said the supervisee/intern did %.2f fieldwork hours for that single week.\n Calculating how many hours the supervisor should document...\n...\n", wkField);
	   printf("30 is the maximum hours a supervisee/intern/learner can document in a single week.\n");
	   printf("Supervisor documents:\n");
	   printf("1.50 hours for %.2f field work hours in Independent Fieldwork\n", wkField);
	   printf("2.25 hours for %.2f field work hours in Practicum\n", wkField);
	   printf("3.00 hours for %.2f field work hours in Intensive Practicum\n", wkField);
	printf("\n \nThat's it. Now go supervise! \nThis program is open source software under GPL 3.0 License.\nNO warranty, NO guarantees, NO Credentialing board affiliations. Use at your own risk and responsibility.\n");	
	}

	//If between minimum and maximum, print these calculations.
	else {
		//Do the math for supervision documentation in any category.
	   wkSup   = wkField * .05;
	   wkSupP  = wkField * .075;
	   wkSupIP = wkField * .1;

	   printf("\n\nYou said the supervisee/intern did %.2f fieldwork for that single week.\n Calculating how many hours the supervisor should document...\n", wkField);
	   printf("Supervisor documents %.2f\n", wkSup);
	   printf("%.2f hours for %.2f field work hours in Independent Fieldwork\n", wkSup, wkField);
	   printf("%.2f hours for %.2f field work hours in Practicum\n", wkSupP, wkField);
	   printf("%.2f hours for %.2f field work hours in Intensive Practicum\n", wkSupIP, wkField);
	

	printf("\n \nThat's it. Now go supervise! \nThis program is open source software under GPL 3.0 License.\nNO warranty, NO guarantees, NO Credentialing board affiliations. Use at your own risk and responsibility.\n");	
	}
	
	return 0;
}
