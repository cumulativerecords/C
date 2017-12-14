/* enums and a switch statement */
#include <stdio.h>

void
userPrompt(void);

int main()
{
  //declaring variable cat_gods type pet
  enum pet {robin_hood, purr_purr, orange_crush};
  enum pet cat_gods;
  cat_gods = robin_hood; 
  //call a function for user prompt
  userPrompt(); 
  //store user input
  scanf("%d", &cat_gods);
     
  // run switch statement
  switch (cat_gods)
   {
    case robin_hood:
	puts("\n\nRobin Hood is your god!\n \n \n...Cat god!\n");
	break;
    case purr_purr:
	puts("\n\nBow to thy ruler... \n the MIGHTY PURR PURR!\n");
	break;
    case orange_crush:
	puts("\n\nBehold! \n \n"
	     "\nOrange Crush is your cat god!\n");	
	break;
    default:
	puts("Ha! Some input. You are not worth of cat god!\n "
             "Now... \n\n\n\n "
             "                 TUNA!!!!!!!!!!!!!\n"
	     "C\n"
	     "         A\n"
	     "			 N\n"
	     "");

	break;
   }

return 0;




}

void
userPrompt(void)
{
  printf("\n\nGive the mighty Sphinx a number from 0 to 2 \n"
         "Then all your fortune is revealed!");
}  
