#include<stdio.h>
struct Driver
{
    char name[34];
    char d1No[45];
    char route[47];
     int kms;

};
int main()
{
struct Driver d1,d2,d3;
printf("Enter the details of the Drivers no 1\n");
printf("Enter the details of first driver\n");
scanf("%s",&d1.name);
printf("Enter the dlno of first driver\n");
scanf("%s",&d1.d1No);
printf("Enter the route of first driver\n");
scanf("%s",&d1.route);
printf("Enter the kms of first driver\n");
scanf("%s",&d1.kms);

printf("Enter the details of the Drivers no 2\n");
printf("Enter the details of second driver\n");
scanf("%s",&d2.name);
printf("Enter the dlno of second driver\n");
scanf("%s",&d2.d1No);
printf("Enter the route of second driver\n");
scanf("%s",&d2.route);
printf("Enter the kms of second driver\n");
scanf("%s",&d2.kms);

printf("Enter the details of the Drivers no 3\n");
printf("Enter the details of third driver\n");
scanf("%s",&d3.name);
printf("Enter the dlno of third driver\n");
scanf("%s",&d3.d1No);
printf("Enter the route of third driver\n");
scanf("%s",&d3.route);
printf("Enter the kms of third driver\n");
scanf("%s",&d3.kms);





printf("Printing Information of these drivers:*****\n");
printf("For Driver No 1: Name is %s",d1.name);
printf("DL number  %s\n",d1.d1No);
printf("Route  is %s\n",d1.route);
printf("kms is %s\n",d1.kms);

printf("For Driver No 1: Name is %s",d2.name);
printf("DL number  %s\n",d2.d1No);
printf("Route  is %s\n",d2.route);
printf("kms is %s\n",d2.kms);

printf("For Driver No 1: Name is %s",d3.name);
printf("DL number  %s\n",d3.d1No);
printf("Route  is %s\n",d3.route);
printf("kms is %s\n",d3.kms);


}


