
// write a program read two arrays of size 5 and store sum of there arrays into third array.

#include<stdio.h>
#include<conio.h>

int main()
{
    int arr1[5],arr2[5],sumArr[5],i;

printf("Enter a elements:");

    for ( i = 0; i < 5; i++)
    {
        scanf("%d",&arr1[i]);
    }
    
    for ( i = 0; i < 5; i++)
    {
        scanf("%d",&arr2[i]);
    }
    
    for ( i = 0; i < 5; i++)
    {
        sumArr[i]=arr1[i]+arr2[i];
         printf("%d is=%d\n",sumArr[i]);
    }
    
}