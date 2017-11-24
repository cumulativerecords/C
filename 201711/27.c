/* Switch statement for ABA supervision categories*/

#include <stdio.h>

int main()
{
	float wkF, wkS, wkSP, wkSI;
	int sChoice;
	float maxS = 1.5, maxSP = 2.25, maxSI = 3.0;

	printf("What category of supervision are you documenting?\nEnter the following to select:\n\"1\" = Independent Fieldwork\n\"2\" = Practicum\n\"3\" = Intensive Practicum\nEnter choice:\n");
	scanf("%d", &sChoice);
	
	printf("How many fieldwork hours did the supervisee/intern do for ONE WEEK?\n");
	scanf("%f", &wkF);
	
	if (wkF < 10.0) 
	{
		printf("Problem detected! Fieldwork hours must be 10 to 30 hours per week.\n");
		sChoice = 4;
	}
	else if ( wkF > 30.0)
	{
		printf("Maximum fieldwork is 30 hours in a single week. Calculator will use 30 hours as fieldwork amount.\n"); 	
		wkF = 30.0;
	}
	else 
	{
		wkS  = wkF * .05;
		wkSP = wkF * .075;
		wkSI = wkF * .1;
	}

	switch (sChoice)
	{
	  case 1: printf("Document %.2f supervision hours for Independent Fieldwork\n", wkS);
			break;
	  case 2: printf("Document %.2f supervision hours for Practicum\n", wkSP);
		  	break;
	  case 3: printf("Document %.2f supervision hours for Intensive Practicum\n", wkSI);
		  	break;
	  case 4: printf("Value of fieldwork hours entered is too low to calculate.\n"); 
			break;
	  default: printf("Illegal entry for supervison category.\n");
	}

	return 0;
}
