/* Working Supervision Documentation Calculator program
*Switch statement for ABA supervision categories
*/

#include <stdio.h>

int main()
{
	float wkF, wkS, wkSP, wkSI;
	int sChoice;
	float maxS = 1.5, maxSP = 2.25, maxSI = 3.0;
	printf("\nCALCULATOR: DOCUMENTING SUPERVISED FIELDWORK HOURS\n");
	
	printf("What category of supervision are you documenting?\nEnter the following to select:\n\"1\" = Independent Fieldwork\n\"2\" = Practicum\n\"3\" = Intensive Practicum\nEnter choice:\n");
	scanf("%d", &sChoice);
	
	printf("How many fieldwork hours did the supervisee/intern do for ONE WEEK? \nFormats allowed: 10, 10.2, 10.25\n");
	scanf("%f", &wkF);
	
	if (wkF < 10.0) 
	{
		printf("\nProblem detected! Fieldwork hours must be 10 to 30 hours per week.\n");
		sChoice = 4;
	}
	else if ( wkF > 30.0)
	{
		printf("\nMaximum fieldwork is 30 hours in a single week. Calculator used 30 hours as fieldwork hours input value...\n"); 	
		wkF  = 30.0;
		wkS  = wkF * .05;
		wkSP = wkF * .075;
		wkSI = wkF * .1;
	}
	else 
	{
		wkS  = wkF * .05;
		wkSP = wkF * .075;
		wkSI = wkF * .1;
	}

	switch (sChoice)
	{
	  case 1: printf("\n*****************************************************************************************\n*  Document %.2f supervision hours and %.2f fieldwork hours of Independent Fieldwork.  *\n*****************************************************************************************\n", wkS, wkF);
			break;
	  case 2: printf("\n*****************************************************************************\n*  Document %.2f supervision hours and %.2f fieldwork hours of Practicum.  *\n*****************************************************************************\n", wkSP, wkF);
		  	break;
	  case 3: printf("\n***************************************************************************************\n*  Document %.2f supervision hours and %.2f fieldwork hours of Intensive Practicum.  *\n***************************************************************************************\n", wkSI, wkF);
		  	break;
	  default: printf("\nIllegal entry for supervison category.\n\n");
	}
	

//	printf("\n\n\nAbout: This program is useful for applied behavior analysis fieldwork hours toward credential application requirements. Calculating documentation hours is tedious and error-prone. This program simplifies calculations. This program is open source software licensed under GPL 3.0.\n Created by Benjamin J. Theisen in 2017. \n NO warranty NO guarantees NO liability for use NO BACB affiliation. Use at own risk and responsiblity. Copy, share, modify, and distribute freely.");
	//		break;
	
	
	return 0;
}
