#include<stdio.h>
#include<math.h>
int main()
{
    int p,q, opt;
    printf("Enter a no.1 and no.2 and opt");
    scanf("%d,%d,%c",&q,&p,& opt);
    switch(opt)
    {
        case '+':
        printf("The sum is %d",p+q);
        break;
        case '*':
        printf("The multiplication is %d",p*q);
        break;
        default:
        printf("invalid");   
        
         }
         return 0;
}