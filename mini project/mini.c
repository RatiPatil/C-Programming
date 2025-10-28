#include <stdio.h>
#include <conio.h>

int add()
{
    int a, b = 10, s = 0;
    printf("Enter a one numbers\n");
    scanf("%d", &a);
    s = a + b;
    printf("The sum is : %d\n\n\n", s);
}
int sub()
{
    int a, b = 10, s;
    printf("Enter a one numbers\n");
    scanf("%d", &a);
    s = a - b;
    printf("The substraction is : %d\n\n\n", s);
}
int mul()
{
    int a, b = 10, s;
    printf("Enter a one number\n");
    scanf("%d", &a);
    s = a * b;
    printf("The Multiplication is : %d\n\n\n", s);
}
int div()
{
    int a, b = 10, s;
    printf("Enter a one number\n");
    scanf("%d", &a);
    s = a / b;
    printf("The Division is : %d\n\n\n", s);
}
int help()
{
    printf("\t\t\tokok , I understand what type of you gives help , so you can study basic knowldge of c programming and basic concept clear first and you can try agin this type of progrms in c langauge,, I hope you can understand me what I am telling you ok \n\n");

    printf("\t\t\tRead Carefully all instructions\n\n");
    printf("1: Addition:  Allready B=10 value are decalred ,First you enter a one value for A Variable  and you will got your Answer\n\n");
    printf("2: substraction:  Allready B=10 value are decalred ,First you enter a one value for A Variable  and you will got your Answer\n\n");
    printf("3: Multiplication:  Allready B=10 value are decalred ,First you enter a one value for A Variable  and you will got your Answer\n\n");
    printf("4: Division:  Allready B=10 value are decalred ,First you enter a one value for A Variable  and you will got your Answer,,And most important condition is you Enter a more than 10 value , Example: 11,99,56,23,25 etc.....\n\n");
    printf("\t\tMost powerfull line is : YOU CAN DO IT !!\n\n");
}

int main()
{
    int a;
    printf("\t\t\tWelcome to My page and My small project\n\n\n\n");
    // printf("\t\t\tPlese Press any one key for next page\n\n");
    getchar();
    printf("\t\t\tChoose one option which task you given\n\n\n\n");
    printf("\t\t\t1:Addition\n");
    printf("\t\t\t2:Substraction\n");
    printf("\t\t\t3:Multiplication\n");
    printf("\t\t\t4:Division\n");
    printf("\t\t\t5:You want to help press 5 \n\n\n");

    printf("\t\t\tEnter Your choice\n");
    scanf("%d", &a);

    switch (a)
    {
    case 1:
        add();
        break;
 
    case 2:
        sub();

        break;
    case 3:
        mul();
        break;
    case 4:
        div();
        break;
    case 5:
        help();
        break;

    default:
        printf("Don't worry Try agian");
        break;
    }

    printf("\t\t\tThank You\n\n\n ");
    printf("\t\t\t\t\t\tMade By Ratikant Patil\n\n\n ");

    getche();
}