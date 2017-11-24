/* trying the supervision program again with if/continue expressions*/

#include <stdio.h>

int main ()
{
	float wkField, wkSup;
	
	printf("Hours this week:\n");
	scanf("%f\n", &wkField);
	
	while (wkField < 10.0)
	{
	   printf("No, too small\n");
	}
	
	while (wkField > 30.0)
	{
	   printf("That's too many field hours. Max to document is 30.\n");
	}
	
	while (wkField < 30.0 || 10.0 >= wkField)
	{
   	   wkSup = wkField * .05;	   
	   printf("Supervisor should document %.2f hours for the week you entered.\n", wkSup);
	}
	
	return 0; 
}  
