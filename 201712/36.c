/* enubs excercise */
#include <stdio.h>

void
greeter(void);

int main()
{
  enum balls {basket, base, tether, soft};
  enum balls kindsOfBalls;
  kindsOfBalls = 0;  
  
  greeter();
  
  printf("Here are the numbers of balls:\n");
  for (kindsOfBalls = 0; kindsOfBalls <= soft; kindsOfBalls++)
  {
   printf("%d\n", kindsOfBalls);
  }
  
  printf("Now give a number from 0 to 3, to find a balls kind.\n");
  scanf("%d", &kindsOfBalls);
  
  switch (kindsOfBalls)
  {
    case basket:
	puts("Basket balls\n");
	break;
    case base:
	puts("Base balls\n");
	break;
    case tether:
	puts("Tether balls\n");
	break;
    case soft:
	puts("Soft balls\n");
	break;
    default:
	puts("Entry is something else\n");
	break;
  }
  
  return 0;
}

void
greeter(void)
{
  puts("Time to talk about balls!\n");
}
