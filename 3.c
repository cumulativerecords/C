#include <stdio.h>
int main()
{
	char inp[100];
	printf("Type a string, then press RETURN key: \n");
	fgets(inp, 100, stdin);
        printf("Your input: %s", inp);
}	
