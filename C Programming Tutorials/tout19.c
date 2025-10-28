#include<stdio.h>
int sum(int a,int b)
{
    return  a + b;

}
int main()
{
    int a,b,c;
    a=9;
    b=9;
    c=sum(a,b);
    printf("\nThe sum is \n %d",c);
}