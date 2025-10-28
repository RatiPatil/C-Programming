#include <stdio.h>
#include <conio.h>

main()
{
    int a[3][3], i, j,sum=0;
    // int a[3][3], i, j,sum=0;

    for (int i = 0; i < 3; i++)
    {
       
        for (int j = 0; j <3; j++)
        {
            scanf("%d", &a[i] [j]);
        }
    }
    for (int i = 0; i < 3; i++)
    {
       
        for (int j = 0; j <3; j++)
        {
            printf("%d\t",a[i] [j]);
            sum=sum+a[i][j];
        }
        printf("\n");
    }
    printf("The sum is = %d\n",sum);
}