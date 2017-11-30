/* Reading strings using gets*/
#include <stdio.h>
#define SENT_LEN 80

int main()
{
  char sentence[SENT_LEN+1], prompt[] = "Enter sentence:";
  puts(prompt);
  gets(sentence);
  puts(sentence); 
  printf("%s\n", sentence);
  return 0;
}
