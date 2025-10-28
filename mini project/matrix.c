#include <stdio.h>
#include <conio.h>

int add()
{

    int a[3][3], i, j, sum = 0;

    printf("Enter a row and coloums elements\n");
    for (int i = 0; i < 3; i++)
    {

        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < 3; i++)
    {

        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", a[i][j]);
            sum = sum + a[i][j];
        }
        printf("\n");
    }
    printf("\nThe sum is = %d\n", sum);
}
int sub()
{

    int a[3][3], i, j, sub = 0;
    printf("Enter a row and coloums elements\n");

    for (int i = 0; i < 3; i++)
    {

        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < 3; i++)
    {

        for (int j = 0; j < 3; j++)
        {
            printf("\n\n%d\t", a[i][j]);
            sub = sub - a[i][j];
        }
        printf("\n");
    }
    printf("The substraction is = %d\n", sub);
}
int multi()
{

    int a[3][3], i, j, multi = 0;
    printf("Enter a row and coloums elements\n");

    for (int i = 0; i < 3; i++)
    {

        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < 3; i++)
    {

        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", a[i][j]);
            multi = multi * a[i][j];
        }
        printf("\n");
    }
    printf("The multiplication is = %d\n", multi);
}
int divi()
{

    int a[3][3], i, j, divi = 0;
    printf("Enter a row and coloums elements\n");

    for (int i = 0; i < 3; i++)
    {

        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < 3; i++)
    {

        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", a[i][j]);
            divi = divi / a[i][j];
        }
        printf("\n");
    }
    printf("The division is = %d\n", divi);
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
        multi();
        break;
    case 4:
        divi();
        break;

    default:
        printf("Don't worry Try agian");
        break;
    }

    printf("\t\t\tThank You\n\n\n ");
    printf("\t\t\t\t\t\tMade By Ratikant Patil\n\n\n ");

    getche();
}