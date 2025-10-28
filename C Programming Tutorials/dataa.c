#include<stdio.h>
#include<stdlib.h>


struct node
{
 int data;
 struct node*next;
 
 
};
void linkedListTraversal(struct node*ptr){
    while (ptr!= NULL)
    {
    printf("%d \n", ptr->data);
    ptr = ptr->next;
        
    }
    
}
int main()
{
struct node*head;
struct node*second;
struct node*third;
// Allocate memory for nodes in the linked list in heap


head=(struct node *)malloc(sizeof(struct node));
second=(struct node *)malloc(sizeof(struct node));
third=(struct node *)malloc(sizeof(struct node));

head->data=7;
head->next=second;

 second->data=45;
 second->next=third;

third->data=12;
third->next=NULL;

linkedListTraversal(head);

return 0;

}