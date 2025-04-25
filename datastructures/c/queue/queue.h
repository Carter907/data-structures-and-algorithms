#ifndef QUEUE_H
#define QUEUE_H

#include <stdbool.h>

typedef struct node {
  int value;
  struct node *next;
} node;

typedef struct Queue {
  node *head;
  node *tail;
} Queue;

Queue *new_queue();
void enqueue(Queue *q, int value);
int dequeue(Queue *q);
bool is_empty(Queue *q);
void print_queue(Queue *q);
void clear_queue(Queue *q);

#endif
