#include "linked_list.h"
#include <stdio.h>
#include <stdlib.h>

// inserts a new node to the start of the list
void add_first(ListNode **head, int value) {

  // allocate memory for the new node
  ListNode *first = malloc(sizeof(ListNode));

  if (first == NULL) {
    printf("malloc failed: stack full");
    exit(1);
  }

  // set the value of the node
  first->value = value;

  // set the next node to be the next node of the current head
  first->next = *head;

  // re-assign the head to the new node
  *head = first;
}

// inserts a new node to the start of the list
void add_last(ListNode **head, int value) {

  // allocate memory for the new node
  ListNode *last = malloc(sizeof(ListNode));

  if (last == NULL) {
    printf("malloc failed: stack full");
    exit(1);
  }

  // set the value of the node
  last->value = value;

  ListNode *curr = *head;

  if (curr == NULL) {
    *head = curr;
    return;
  }

  while (curr->next != NULL) {
    curr = curr->next;
  }
  curr->next = last;
  last->next = NULL;
}

void print_list(ListNode **head) {

  ListNode *curr = *head;

  printf("{ ");
  while (curr != NULL) {
    printf("%d -> ", curr->value);
    curr = curr->next;
  }
  printf("NULL }\n");
}

void remove_all(ListNode **head) {
  ListNode *p = *head;

  while (p != NULL) {
    ListNode *q = p;
    p = p->next;
    free(q);
  }
}
