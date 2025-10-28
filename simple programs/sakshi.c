#include <stdio.h>
#include <stdlib.h>

// Define the structure for a node
struct Node {
    int data;           // The data stored in the node
    struct Node* next;  // Pointer to the next node
};

// Function to insert a node at the end of the list
void append(struct Node** head, int data) {
    // Create a new node
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    struct Node* last = *head;  // Pointer to traverse the list

    new_node->data = data;
    new_node->next = NULL;

    // If the list is empty, make new_node as the head
    if (*head == NULL) {
        *head = new_node;
        return;
    }

    // Otherwise, traverse to the last node and add the new node there
    while (last->next != NULL) {
        last = last->next;
    }

    last->next = new_node;
}

// Function to display the list
void display(struct Node* head) {
    struct Node* temp = head;
    if (temp == NULL) {
        printf("The list is empty.\n");
        return;
    }
    // Traverse the list and print each node's data
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

// Main function to demonstrate the linked list operations
int main() {
    struct Node* head = NULL; // Start with an empty list

    // Append some data to the list
    append(&head, 10);
    append(&head, 20);
    append(&head, 30);
    append(&head, 40);

    // Display the linked list
    printf("The linked list is:\n");
    display(head);

    return 0;
}
