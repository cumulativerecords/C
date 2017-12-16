/* enum practice */
#include <stdio.h>

void
fruitStart(void);

void
fruitEnd(void);

int main()
{
 enum fruit {apples, peaches, pears, plums, grapes};
 enum fruit fruitcup;
 fruitcup = 0;

 //start it up
 fruitStart();
 //count the fruit cup
 for (fruitcup = 0; fruitcup < 4; fruitcup++)
 {
   printf("%d\n", fruitcup);
 }
   printf("That's how many fruits are in the basket.\n");

   fruitcup = 0;
   printf("Now pick a fruit number to eat.\n");
   scanf("%d", &fruitcup);
   
   switch (fruitcup)
   {
   case apples: 
	puts("Apples");
	fruitEnd();
	break;
   case peaches:
        puts("Peaches");
	fruitEnd();
	break;
   case pears:
	puts("Pears");
	fruitEnd();
	break;
   case plums:
	puts("Plums");
	fruitEnd();
	break;
   case grapes:
	puts("Grapes");
	fruitEnd();
	break;
   default:
	puts("Something's not in the basket here.");
	break;
   }
   
   return 0;
}

void
fruitStart(void)
{
 puts("Hi fruit fans!");
}

void
fruitEnd(void)
{
 puts("Enjoy!");
}
