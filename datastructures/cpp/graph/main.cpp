#include "graph.h"
#include <iostream>

int main() {

  Graph *g = new Graph();

  g->addVertex(1);
  g->addVertex(5);
  g->addVertex(3);

  g->addEdge(1, 5);
  g->addEdge(3, 5);

  std::cout << "Before removing vertex 3: " << '\n';
  g->print();

  g->removeVertex(3);

  std::cout << '\n';
  std::cout << "After removing vertex 3: " << '\n';

  g->print();

  return 0;
}
