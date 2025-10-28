#include<stdio.h>
#include<conio.h>

int main()
{
    int i=1,a=5,sum=0;
    do
    {
      
    //   printf("%d",i);
      
      sum=a*i;
      printf("%d*%d=%d\n",a,i,sum);
      i++;
    } while (i<=10);
    
}