/*#include <stdio.h>
int main()
{
	char inp[100];
	printf("Type a string, then press RETURN key: \n");
	fgets(inp, 100, stdin);
        printf("Your input: %s", inp);
}	

*/

#include <stdio.h>
int main()
{
	char userInput[100];
	printf("Enter string :\n");
	fgets(userInput, 100, stdin);
	printf("Your input: %s", userInput);
}
