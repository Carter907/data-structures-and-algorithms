#ifndef STACK_H
#define STACK_H

#define DEFAULT_CAPACITY 10

class Stack {

  int length;
  int capacity = 10;
  int *buffer;

public:
  Stack(int capacity);
  int get_capacity();
  int *get_buffer();
};

#endif
