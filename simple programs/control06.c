#include<stdio.h>
#include<conio.h>

// else if leadder
int main()
{
    int marks;
    char A , Z;
    printf("Enter Your marks\n");
    scanf("%d",&marks);
    if ( 'A'=='Z')
    {
        printf("Grade A\n");
    }else if (marks>80)
    {
        printf("Grade B\n");
    }else if (marks>70)
    {
        printf("Grade C\n");
    }else if (marks>60)
    {
        printf("Good try\n");
    }
    
        printf("End of the Program ");
    
    
    
}