#include "node.h"

Node::Node(int value) : value(value), next(nullptr) {}
Node::Node(int value, Node *next) : value(value), next(next) {}
