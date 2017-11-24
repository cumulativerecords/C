#include <stdio.h>

int main(void)
{
    int number1, number2;
    char keypressed;
    char buffer[20];
    
    printf("Please enter two integers separated by a comma, followed by ENTER: ");
    scanf(" %d , %d",&number1,&number2);getchar();
    printf("The first number you entered was: %d\n",number1);
    
    printf("Press a key to see the second number, followed by ENTER.\n");
    keypressed = getchar();getchar();
    
    printf("The second number was: %d. ",number2);
    printf("And the key you pressed was %c\n",keypressed);
    
    printf("Now enter your favourite colour: ");
    gets(buffer);
    printf("Yuck! %s is a terrible colour!\n",buffer);
    
    return 0;
}
