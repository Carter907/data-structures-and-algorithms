#ifndef NODE_H
#define NODE_H

struct Node {
  int value;
  Node *next;
  Node(int value, Node *next);
  Node(int value);
};

#endif
