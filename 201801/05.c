/* 4p 
* compare a list of known items to user input
* return results */
#include <stdio.h>
#include <string.h>
#include "hibye.h"
#
#define NUM_CATS 6
int main (int argc, char *argv[])
{
 //checking input
 while (argc < 2)
 {
   printf("Usage: ./05 string1 string2 ...\n");
   return 1;
 }
 //declare variables
 char *cats[] = {"Robin Hood", "William Shakespurr", "Purr", "Purr Purr", "Robbie", "Orange Crush"};
 int j = 0;
 
 //Greet user
 hello();
 //begin outermost loop, steps through argv input until argc threshold hit
 for (int i = 1; i < argc; i++)
 {
 //begin innermost loop, steps through strings and compares the content
   for (j = 0; j < NUM_CATS; j++)
     if (strcmp(argv[i], cats[j]) == 0)
     {
       printf("%s is cat %d\n", argv[i], j + 1);
       break;
     }
     if (j == NUM_CATS)
       printf("%s has no cat dossier\n", argv[i]);
 }
 goodbye();
}
