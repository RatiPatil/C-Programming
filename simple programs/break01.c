#include <stdio.h>
#include <conio.h>
int main()
{
    int i, a, sum = 0;
    for (i = 1; i <= 5; i++)
    {
        printf("Enter a number");
        scanf("%d", &a);
        if (a < 0)
        {
            break;
        }
        sum = sum + a;
    }
    printf("The sum is :%d\n", sum);
    getch();
}