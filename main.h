#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>

struct node{

     int list;
     struct node* next;
};

void insert(struct node** head, int data);
void display(struct node* head);
void freeLinkedList(struct node** head);

#endif
