#include "stack.h"
#include "node.h"

void Stack::push(int value) {
  Node *new_top = new Node(value);
  new_top->next = this->_top;
  Node *tmp = this->_top;
  this->_top = new_top;
  _size++;
}
int Stack::top() { return this->_top->value; }

void Stack::remove_top() {
  if (_size < 1) {
    return;
  }
  Node *next = _top->next;
  delete _top;

  this->_top = next;
  _size--;
}

int Stack::pop() {

  int top_val = top();

  remove_top();

  return top_val;
}

int Stack::size() { return this->_size; }
