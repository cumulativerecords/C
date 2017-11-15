/*
 * C Program for Supervised Fieldwork Hours at 1,500 hours, 5 percent supervised.
 * Different program needed for calculating hours via Practicum or Intensive Practicum.
*/
#include <stdio.h>
#define TOTAL_FIELDWORK_HOURS = 1500
#define MAX_WK_HOURS = 60.0f
#define MIN_WK_HOURS = 10.0f

int main()
{
	int total_fieldwork_hours;
        float current_fieldwork_hours, max_2wk_hours, min_2wk_hours, sup_rate, current_rate;
	printf("For the week, how many fieldwork hours did the intern/student/learner/supervisee perform? Enter a number:\n");
	scanf("%f", &current_fieldwork_hours);
	current_rate = current_fieldwork_hours * 0.05f ;
	printf("The supervisor should provide %.2f hours.\n", current_rate);

	return 0;
}
