#ifndef STACK_H
#define STACK_H
#include "node.h"

class Stack {

  int _size;
  Node *_top;

public:
  int top();
  void remove_top();
  int pop();
  void push(int value);
  void clear();
  bool is_empty;
  int size();
};

#endif
