#include <stdio.h>
#include <conio.h>

int main()
{
    int c;
    printf("Enter a Marks\t\n");
    scanf("%d", &c);
    switch (c)
    {
    case 57:
        printf("Good try:%d", c);
        break;
    case 80:
        printf("your Grade is B:%d", c);
        break;
    case 90:
        printf("your Grade is A:%d", c);
        break;
    case 70:
        printf("your Grade is C:%d", c);
        break;
    case 60:
        printf("your Grade is :%d", c);
        break;

    default:
        printf("chalo coffee ke liye");
        break;
    }
}