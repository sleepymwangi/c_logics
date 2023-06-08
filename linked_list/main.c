#include "main.h"

int main()
{
  struct node* head = NULL;

  insert(&head, 5);
  insert(&head, 10);
  insert(&head, 15);

  display(head);

  freeLinkedList(&head);

  return(0);

}
