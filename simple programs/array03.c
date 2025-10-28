
// write a program to read an array of 10 integers and count total no.of even and odd elements

#include<stdio.h>
#include<conio.h>



//  This is First way of writing this program


// int main()
// {
//     int a[10];
//     int even=0,odd=0;
//     printf("Enter a elements:\n");

//     for (int  i = 0; i < 10; i++)
//     {

//         scanf("%d",&a[i]);
//     }
//     for ( int i = 0; i < 10; i++)
//     {
//         if (a[i]%2==0)
//         {
//             even=even+1;
//         }else
//         odd=odd+1;
        
//     }
//     printf("The Even elements is :%d\n",even);
//     printf("The Odd elements is :%d\n",odd);
// }


//  This is Second way of writing this program

int main()
{
    int a[10];
    int even=0,odd=0,i;
    printf("Enter a elements:\n");

    for (int  i = 0; i < 10; i++)
    
{
        scanf("%d",&a[i]);
    
   
        if (a[i]%2==0)
        
            even=even+1;
        else
        odd=odd+1;
        
}
    printf("The Even elements is :%d\n",even);
    printf("The Odd elements is :%d\n",odd);
}