#include <stdio.h>
int main()
{
    printf("Lets learn about pointers \n");
    int a = 76;
    int *ptra = &a;
    int *ptr2 = NULL;
    printf("The address of pointer to a is %d\n", &ptra);
    printf("The address of a is %d\n", &a);
    printf("The address of a is %d\n", ptra);
    printf("The address of  some garbage is a is %p\n", &ptr2);
    printf("The address of a is %d\n", *ptra);
    printf("The address of a is %d\n", a);
    return 0;
}