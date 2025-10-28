// Write a program to The Addition of all individual rows and columns



#include <stdio.h>
#include <conio.h>

int main()
{
    int a[3][3], i, j, s1, s2;
    printf("Enter a matrix Elements:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }

    }
        printf("The Matrix:\n");
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                printf("%d\t", a[i][j]);
            }
            printf("\n");
        }
        printf("The Addition of all individual rows and columns:\n");
        for (i = 0; i < 3; i++)
        {
            s1 = s2 = 0;
            for (j = 0; j < 3; j++)
            {
                s1 = s1 + a[i][j];
                s2 = s2 + a[j][i];
            }
            printf("\n s1=%d\t s2=%d", s1, s2);
        }
        printf("\n");
    
}