#include <stdio.h>
#include <conio.h>
int main()
{
    char opt;
    int a, b;
    printf("Enter a opreator\n");
    scanf("%c", &opt);
    switch (opt)
    {
    case '+':
        printf("Enter a two numbers:");
        scanf("%d %d", &a, &b);
        printf("The Adittion is :\t%d", a + b);
        break;
    case '-':
        printf("Enter a two numbers:");
        scanf("%d %d", &a, &b);
        printf("The Substraction is :\t%d", a - b);
        break;
    case '*':
        printf("Enter a two numbers:");
        scanf("%d %d", &a, &b);
        printf("The Multiplication is :\t%d", a * b);
        break;
    case '/':
        printf("Enter a two numbers:");
        scanf("%d %d", &a, &b);
        printf("The Division is :\t%d", a / b);
        break;
    case '%':
        printf("Enter a two numbers:");
        scanf("%d %d", &a, &b);
        printf("The Reminder is :\t%d", a % b);
        break;

    default:
        printf("You can do it try again ");
        break;
    }
}