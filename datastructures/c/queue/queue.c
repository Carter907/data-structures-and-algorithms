#include "queue.h"
#include <stdio.h>
#include <stdlib.h>

// create a new queue
Queue *new_queue() {
  Queue *q = malloc(sizeof(Queue));

  return q;
}

// add a element to the end of the queue
void enqueue(Queue *q, int value) {

  node *next = malloc(sizeof(node));
  if (next == NULL) {
    printf("main memory is full");
    exit(1);
  }

  next->value = value;
  next->next = NULL;

  if (q->head == NULL) {
    q->head = next;
    q->tail = next;
    return;
  }

  node *ptr;
  for (ptr = q->head; ptr->next != NULL; ptr = ptr->next)
    ;
  ptr->next = next;
  q->tail = next;
}

// pop from the front
int dequeue(Queue *q) {
  int result = q->head->value;
  node *head = q->head;
  q->head = q->head->next;
  free(head);

  return result;
}

// check if there ain't nothin here
bool is_empty(Queue *q) {

  if (q->head != NULL) {
    return false;
  }

  return true;
}

void print_queue(Queue *q) {
  if (q->head == NULL) {
    printf("empty queue\n");
    return;
  }
  printf("{ ");
  for (node *ptr = q->head; ptr->next != NULL; ptr = ptr->next) {
    printf("%d <- ", ptr->value);
  }
  printf("%d }\n", q->tail->value);
}

void clear_queue(Queue *q) {

  node *prev = q->head;
  node *ptr = q->head->next;
  for (; ptr != NULL; prev = ptr, ptr = ptr->next) {
    free(prev);
  }
  free(q->tail);
  q->head = NULL;
  q->tail = NULL;
}
