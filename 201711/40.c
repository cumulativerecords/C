/* Experimentation with writing strings in character arrays*/
#include <stdio.h>

int main()
{
  char str[] = "Waterworld movie!";

  printf("call printf to print full string:\n");
  printf("%s\n", str);
  printf("\n\n");
 
  printf("call printf with m conversion specification greater than number of string characters:\n");
  printf("%30s\n", str);
  printf("\n\n");
 
  printf("call printf with signed (negative) m conversion specification greater than number of string characters:\n");
  printf("%-30s\n", str);
  printf("\n\n");

  printf("call printf with m conversion specification value less than the total number of string characters.\n");
  printf("%3s\n", str);
  printf("\n\n");
  
  printf("call printf with .p conversion specification value less than the total number of string characters.\n");
  printf("%.4s\n", str);
  printf("\n\n");
  
  printf("call puts function to print the string. Automatically prints new line.\n");
  puts(str);

  printf("Notice that calling printf with m conversion specification smaller than number of string characters does not truncate the string. Instead it prints the string at full size." 
         "If I add a new line to a printf call using m conversion specification that is smaller than actual number of characters in a string, it is identical to printing the string using \"puts\" function, which automatically adds a new line.\n"); 

  return 0;
}
