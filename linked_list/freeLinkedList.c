#include "main.h"

// Function to free the memory allocated for the linked list

void freeLinkedList(struct node** head)
{
   struct node* current = *head;
   struct node* next;

   while(current != NULL)
   {
      next = current->next;
      free(current);
      current = next;
   }
   *head = NULL;
}
