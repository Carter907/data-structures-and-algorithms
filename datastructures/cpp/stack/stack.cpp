#include "stack.h"
#include <stdlib.h>

Stack::Stack(int capacity) {
  this->capacity = capacity;
  buffer = (int *)malloc(sizeof(int) * capacity);
}
int Stack::get_capacity() { return this->capacity; }
int *Stack::get_buffer() { return this->buffer; }
