#ifndef QUEUE_H
#define QUEUE_H

#include "node.h"

class Queue {

  int _length;
  Node *head;
  Node *tail;

public:
  int length();
  Queue(int value);
};

#endif
