/* enums practice */
#include <stdio.h>
void
greeting(void);

int main()
{
  greeting();
  //declare enum type staff (variable named fieldwork)
  enum staff {Abigail = 1, Beth, Craig, Dennis, Erica, Frank, Giselle};
  enum staff fieldwork;
  
  puts("Okay, no names but here's a list of anonymized staff.");
  for (fieldwork = 0; fieldwork < 7; fieldwork++)
  {
    printf("%d is an anonymous staff...\n", fieldwork + 1);
  }
  
 while (fieldwork > 0) 
 {
  puts("Enter an ID number. Database will print employee name.\n"
       "Enter 0 to exit.\n");
  scanf("%d", &fieldwork); 
  if (fieldwork == 0)
  {
    break;
  }
 
  switch (fieldwork)
  {
    case Abigail:
	puts("Abigail");
	break;
    case Beth:
	puts("Beth");
	break;
    case Craig:
	puts("Craig");
	break;
    case Dennis:
	puts("Dennis");
	break;
    case Erica:
	puts("Erica");
	break;
    case Frank:
	puts("Frank");
	break;
    case Giselle:
	puts("Giselle");
	break;
    default:
	puts("Error!");
	break;
  }
 }
  puts("Goodbye!");

return 0;
}
void
greeting(void)
{
  puts("Hello. Welcome to the well-protected employee database.");
}

 
