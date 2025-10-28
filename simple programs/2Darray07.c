// Multiplication  of 2 matrix (resultant matrix)


#include <stdio.h>
#include <conio.h>

int main()
{
    int a[3][3], i, j, b[3][3], c[3][3], k, sum = 0;
    printf("Enter The First matrix Elements:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter The Second Matrix Elements:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    printf("The first matrix is:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    printf("The Second Matrix is:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", b[i][j]);
        }
        printf("\n");
    }

    printf("The Multiplication of 2 Resultant  Matrix:\n");
    for (i = 0; i < 3; i++)
    {

        for (j = 0; j < 3; j++)
        {

            sum = 0;
            for (k = 0; k < 3; k++)  // k variable is Run 3 times then value run index 0,1,2 
            {
                sum = sum + a[i][k] * b[k][j];

            c[i][j]=sum;
            }

            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }
}
