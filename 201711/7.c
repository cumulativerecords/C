/*Weekly Supervision Hours Calculator
 */
#include <stdio.h>
#define TOTAL_SUPERVISED_HOURS = 1500

int main()
{
	float fw_hours, sup_ratio;
	printf("WEEKLY SUPERVISION HOURS CALCULATOR\n");
	printf("For this week, how many fieldwork hours did the person accruing supervision hours do?\n Valid input ranges from 10 to 30 hours\n");
	scanf("%f", &fw_hours);
	sup_ratio = fw_hours * .05f;
	printf("Okay. The supervisor needs to provide and document %.2f hour(s) of supervision this week. \n Remember to use a 2-week period for documentation forms.\n Fieldwork hours must be between 10 and 30 hours each week you document supervision.\n", sup_ratio);

	return 0;
}
