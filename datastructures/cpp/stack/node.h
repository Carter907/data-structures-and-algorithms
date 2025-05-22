#ifndef NODE_H
#define NODE_H

class Node {
  int value;
  Node *next;

  Node(int value) : value(value), next(nullptr) {}
  Node(int value, Node *next) : value(value), next(next) {}
};

#endif
