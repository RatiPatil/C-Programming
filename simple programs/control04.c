#include<stdio.h>
#include<conio.h>
int main()
{
    int age , salary;
    printf("Enter a age and your salary");
    scanf("%d %d",&age,&salary);
    if (age>30)
    {
        if (salary<50000)
        {
            salary=salary+10000;
            printf("%d",salary);
        }else{
            salary=salary+5000;
            printf("%d",salary);
        }
        
    }else{
            salary=salary+3000;
        }
    printf("End this program");
    getch();
}