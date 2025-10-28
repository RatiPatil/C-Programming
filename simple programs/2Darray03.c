// Write a program in to Transpose of matrix 2 by 3 and  take another matrix b and store transpose elemeents in b matrix and print both A and B matrix

#include <stdio.h>
#include <conio.h>

int main()
{
    int a[2][3], i, j, b[2][3];
    printf("Enter a matrix Elements:\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("The Matrix:\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    printf("The Transpose Matrix is A:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d\t", a[j][i]);
        }
        printf("\n");
    }
    printf("The Transpose Matrix is B:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            b[j][i] = a[j][i];
            printf("%d\t", b[j][i]);
        }
        printf("\n");
    }
}
