#include <stdio.h>
#include <conio.h>

int main()
{
    int i, j, sum;
    printf("Enter a number ");
    scanf("%d", &j);
    for (i = 1; i <= 10; i++)
    {
        sum = j * i;
        printf("%d*%d=%d\n", j, i, sum);
    }
}