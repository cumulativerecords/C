/* practice with enums */
#include <stdio.h>

int main()
{
  /* This is one variable, my_fruit, of type enum fruit */

  enum fruit {grape, cherry, lemon, kiwi, peach = cherry + lemon};
  enum fruit my_fruit;
  my_fruit = grape;
  //int x;
  /* remember: enum is a custom data type used for storing constant integer values and referring to them by names. */
  
  for (my_fruit = 0; my_fruit <= peach; my_fruit++ )
  {
    printf("%d\n", my_fruit);
  }

  printf("Now tell me a number from 0 to 3. "
         "I'll tell you what "
         "fruit I think it is.\n");
  scanf("%d", &my_fruit);
  
  switch ( my_fruit )
    {
      case grape:
	puts("0 is grape\n");
	break;
      case cherry:
	puts("1 is cherry\n");
	break;
      case lemon:
	puts("2 is lemon\n");
	break;
      case kiwi:
	puts("3 is kiwi\n");
	break;
      default:
        puts("That's not in my fruitbasket.\n");
	break;
    }

  return 0;

}
