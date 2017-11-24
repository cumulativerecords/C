#include <stdio.h>

int main()
{
	char luckyNum[100];
	printf("What is your lucky number?\n");
	fgets(luckyNum, 100, stdin);
	printf("Your lucky number is %s but guess what... it is cursed! Hahahahaha\n", luckyNum);
}
