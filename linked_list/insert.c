#include "main.h"

// Function to insert a new node at the beginning of the linked list
void insert(struct node** head, int list)
{

 struct node* newNode = (struct node*)malloc(sizeof(struct node));
 newNode->list = list;
 newNode->next = *head;

 *head = newNode;
}
