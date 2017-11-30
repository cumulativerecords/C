/* Reading strings using scanf and gets*/
#include <stdio.h>
#define SENT_LEN 80

int main()
{
  char sentence[SENT_LEN+1], prompt[] = "Enter sentence:";
  puts(prompt);
  scanf("%s", sentence);
  puts(sentence); 
  printf("%s\n", sentence);
  return 0;
}
