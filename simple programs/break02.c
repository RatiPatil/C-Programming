#include <stdio.h>
#include <conio.h>

int main()
{
    int i, a, sum = 0;
    do
    {
        {
            printf("Enter a number");
            scanf("%d", &a);
            if (a < 0)
            {
                break;
            }
            sum = sum + a;
        }
    } while (i <= 5);
    printf("The sum is :%d\n", sum);
}