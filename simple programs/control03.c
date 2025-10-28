#include <stdio.h>
#include <conio.h>


// Else if ladder

int main()
{
    int num;
    printf("Enter a Three digit Number");
    scanf("%d", &num);
    if (num >= 100 && num <= 999)
    {

        printf("This is three digit number");
    }else
    if (num >= 10 && num <= 99)
    {
        printf("Brother You Entered number is two digit :\t%d", num);
    }
}