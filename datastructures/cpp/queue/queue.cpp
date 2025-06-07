#include "queue.h"

Queue::Queue(int value) {

  Node *new_head = new Node(value);
  head = new_head;
  tail = new_head;
};
