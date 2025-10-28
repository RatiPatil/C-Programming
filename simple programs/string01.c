
//    String is Chracter array and it is ends wuth null character \0
//    character array does not any null character


#include<stdio.h>
#include<conio.h>

int main()
{
    // scanf

    
    char s1[15];
    printf("Enter a string");
    scanf("%s",s1);
   printf("%s",s1);


// gets
    char s1[15];
    printf("Enter a string");
    gets(s1);
   printf("%s",s1);

   /*
   scanf: 


   String can not consider white space in output screen 
   
   


   gets :
     String  consider white space in output screen 

   
   
   */
}