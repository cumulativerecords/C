/* code for 4p */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "07.h"
#define NUM_PIRATES 9

int main (int argc, char *argv[])
{
 //declare inner loop, pirate array
 int j = 0;
 char *pirates[] = {"Captain Jack Sparrow", "Bootstrap Bill", "William Turner", "Elizabeth Turner", "Matey", "Parrot", "First Mate", "Evil Commodore", "Rats"};
 // check input
 while (argc < 2)
 {
   puts("Usage: ./07 string1 string2 ...");
   return 1;
 }
 //now that it won't return error, call hello function from "07.h"
 hello();
 //outer loop steps through argv input, inner loop compares 
 for (int i = 1; i < argc; i++)
 {
   for (j = 0; j < NUM_PIRATES; j++)
     if (strcmp(argv[i], pirates[j]) == 0)  
     {
       printf("%s is pirate %d, Arr!\n", argv[i], j + 1);
       break;
     }
     if (j == NUM_PIRATES)
       printf("%s is a land lubber\n", argv[i]);
 }
 goodbye(); //from "07.h"
}
