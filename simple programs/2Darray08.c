#include<stdio.h>
#include<conio.h>

int main()
{
    int a[3][3],sum=0,i,j;

    printf("Enter a elements :\n");

    for (int i = 0; i <=2; i++)
    {
        
    for (int j = 0; j <=2; j++)
    {
        scanf("%d",&a[i][j]);
    }

    }

    printf("The matrix is:\n");
    for (int i = 0; i <=2; i++)
    {
     
    
    for (int j = 0; j <=2; j++)
    {
        printf("%d\t",a[i][j]);
            sum=sum+a[i][j];
    }
        printf("\n");
     
     } 
     printf("The sum is %d",sum);
}