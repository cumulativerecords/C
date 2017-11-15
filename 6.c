#include <stdio.h>

int main ()
{
	char inp[100];
	printf("Enter a swear word:\n");
	fgets(inp, 100, stdin);
	printf("Hehe! You said %s\n", inp);
}
