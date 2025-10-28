// Write a program to read marks of 5 students Calculate sum adn avarage using Arrays

#include <stdio.h>
#include <conio.h>

int main()
{
    int marks[5], i;

    int sum = 0;
    float avg=0;

    for (i = 0; i < 5; i++)
    {
        printf("Enter a Elements\n");
        scanf("%d", &marks[i]);
    }
    for (i = 0; i < 5; i++)
    {
        sum = sum + marks[i];
    }
    avg = sum / 5;
    printf("The sum is :%d\n The avarage is:%f", sum, avg);
}