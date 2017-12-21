/* structs practice */

#include <stdio.h>
#include <string.h>
#define MAX_LEN 80

void
print_part(struct part p)
{
  printf("Part number: %d\n", p.number);
  printf("Part name: %s\n", p.name);
  printf("Quantity on hand: %d\n", p.on_hand);
}

int main ()
{
  int p = 1; 

  struct part { 
    int number;
    char name [MAX_LEN+1];
    int on_hand;
  } ;

 struct part part1 = { .number = 528, "Disk drive", .on_hand = 10};
 struct part part2 = { .on_hand = 50, .name = "Power supply", .number = 123};
  
   
 while (p > 0) 
 {
  // puts("Enter part number to print: (0 to exit)\n");
  // scanf("%d\n", &p);
   print_part(part part1); 
 }
}

