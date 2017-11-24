/* trying the supervision program again with if/continue expressions*/

#include <stdio.h>

int main ()
{
	float wkField, wkSupInd, wkSupPrac, wkSupIntPrac, i;
	
	printf("Hours this week:\n");
	scanf("%f", &wkField);
	
	for (i = 0; i < 2; i++)	
	if (wkField >= 10.0 && wkField <= 30.0)
	   wkSupInd = wkField * .05;	   
	   wkSupPrac = wkField * .075;
	   wkSupIntPrac = wkField * .1;
	   printf("Supervisor should document the following hours, based on hours you entered for this single week:\n");
	   printf("Independent Fieldwork = %.2f hours\n", wkSupInd);
	   printf("Practicum = %.2f hours\n", wkSupPrac);
	   printf("Intensive Practicum = %.2f hours\n", wkSupIntPrac);
	   printf("The credential seeker undergoing supervision (maybe called a \"supervisee,\" \"intern,\" \"student,\" etc.) completed %.2f hours this week. This perform must perform 10 to 30 hours per week for a supervision period.\n", wkField);
	   
//	else { printf("Not legal dude\n"); }
	return 0; 
}  
