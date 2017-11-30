/* read_line program for reading string into an array
* King, pg. 287
*/
#include <stdio.h>


  char str[80]; 
  int read_line(char str[], int n)
  {
    int ch, i = 0;
     
    while ((ch = getchar()) != '\n')
      if (i < n)
        str[i++] = ch;
      str[i] = '\0';	/* terminates string */
      return i;		/* number of characters stored */
   }
int main()
{
}

