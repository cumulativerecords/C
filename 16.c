/* Programming for no purpose
 * Exploring chapter 7 and 9 in King C Programming book
 */

#include <stdio.h>

int main ()
{
	float supervisorHoursWeek, internHoursWeek;
	float indField, practicum, intPracticum;


	printf("SUPERVISION HOURS CALCULATOR FOR APPLIED BEHAVIOR SUPERVISORS\n");
	printf("How many hours did the intern (person seeking certification) work this single week?\n");
	scanf("%f", &internHoursWeek);

	indField = internHoursWeek * .05;
	practicum = internHoursWeek * .075;
	intPracticum = internHoursWeek * .1;

	if (internHoursWeek < 10 || internHoursWeek > 30)

		printf("Not enough hours.\n");
		

/*	if (internHoursWeek >= 10 || internHoursWeek <= 30) 
*/	
		printf("You said the intern did %.2f hours for the week.\n The supervisor should document the following supervision for the week:\n", internHoursWeek);
	       	printf("%8.2f hours for Independent Fieldwork\n", indField);
		printf("%8.2f hours for Practicum\n", practicum);
		printf("%8.2f hours for Intensive Practicum\n", intPracticum);
			
		printf("\nThis app has no warranty, no guarantees, no BACB affiliation.\n");
		printf("Credits: Benjamin J. Theisen");

	return 0;
}	
