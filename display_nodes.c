#include "main.h"

// Function to display the elements of the linked list

void display(struct node* head)
{
   struct node* current = head;

   while(current != NULL)
   {
    printf("%d", current->list);
    current = current->next;
   }
   printf("\n");
}
