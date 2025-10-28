// Write a program in to Transpose of matrix 2 by 3

#include<stdio.h>
#include<conio.h>


int main()
{
   int  a[2] [3],i,j;
   printf("Enter a matrix Elements:\n");
   for ( i = 0; i < 2; i++)
   {
    for ( j = 0; j < 3; j++)
    {
        scanf("%d",&a[i][j]);
    }
    
   }

   printf("The Matrix:\n");
   for ( i = 0; i < 2; i++)
   {
    for ( j = 0; j < 3; j++)
    {
        printf("%d\t",a[i][j]);
    }
    printf("\n");
   }

   printf("The Transpose Matrix is:\n");
   for ( i = 0; i < 3; i++)
   {
    for ( j = 0; j < 2; j++)
    {
        printf("%d\t",a[j][i]);
    }
    printf("\n");
   }
   
}

