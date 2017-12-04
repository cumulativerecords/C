/*4p variation, exploratory attempt*/
#include <stdio.h>
#include <string.h>
#
#define NAMED_CATS 8

int main(int argc, char *argv[])
{
  char *catNames[] = {"Robin Hood", "Bailey Wailey", "Daisy", "Purr Purr", "Robbie Bobbie", "Robbie", "Willy Billy", "William ShakesPurr"};
  int i, j;
  
  for (i = 1; i < argc; i++)
  {
     for (j = 0; j < NAMED_CATS; j++)
       if (strcmp(argv[i], catNames[j]) == 0)
       {  
	 printf("%s joins the party!\n", argv[i]);
	 break;
       }
       if (j == NAMED_CATS)
	 printf("%s is not on the guest list.\n", argv[i]);
  }
  return 0;
} 
