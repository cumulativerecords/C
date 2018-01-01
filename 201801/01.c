#include <stdio.h>
#include <string.h>
//#include "../hibye.h"
//program purpose is to count lines
int main(int argc, char *argv[])
{
//  int c, i;
  
//]]  while (c != EOF) 
//{
//  for (int i = 0; i != EOF; ++i)
//  {
//    //if (c = getchar() != EOF)
//  }
  int nl;
  FILE *in_file  = fopen("lines.txt", "r"); // read only  
  nl = 0;
//  for (;;) 
//    argv[2];
  while ((c = getchar()) != EOF)
     if (c == '\n')
         ++nl;
  printf("%d lines\n", nl);
 
}     
