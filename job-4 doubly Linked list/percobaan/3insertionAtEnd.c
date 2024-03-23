#include <stdio.h>
#include <stdlib.h>
struct Node
{
 int data;
 struct Node *next; 
 struct Node *prev; 
};
void push(struct Node** head_ref, int new_data)
{
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->next = (*head_ref);
    new_node->prev = NULL;
    if ((*head_ref) != NULL)
    (*head_ref)->prev = new_node;
    (*head_ref) = new_node;
}
void append(struct Node** head_ref, int new_data)
{
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    struct Node* last = *head_ref; 

    new_node->data = new_data;
    new_node->next = NULL;
    if (*head_ref == NULL) {
    new_node->prev = NULL;
    *head_ref = new_node;
    return;
    }
    while (last->next != NULL)
    last = last->next;
    last->next = new_node;
    new_node->prev = last;
    return;
}
void printList(struct Node* node)
{
    struct Node* last;
    printf("\nTraversal in forward direction \n");
    while (node != NULL) {
    printf(" %d ", node->data);
    last = node;
    node = node->next;
    }
    printf("\nTraversal in reverse direction \n");
    while (last != NULL) {
    printf(" %d ", last->data);
    last = last->prev;
    }  
}
int main()
{
    /* Start with the empty list */
    struct Node* head = NULL;
    // Insert 6. So linked list becomes 6->NULL
    append(&head, 6);
    // Insert 7 at the beginning. So
    // linked list becomes 7->6->NULL
    push(&head, 7);
    // Insert 1 at the beginning. So
    // linked list becomes 1->7->6->NULL
    push(&head, 1);
    // Insert 4 at the end. So linked
    // list becomes 1->7->6->4->NULL
    append(&head, 4);
    printf("Created DLL is: ");
    printList(head);
    getchar();
    return 0;
} 
