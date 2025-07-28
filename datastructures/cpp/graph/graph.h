//
// Created by carter on 6/22/25.
//

#ifndef GRAPH_H
#define GRAPH_H

#include <unordered_map>
#include <unordered_set>

class Graph {

  std::unordered_map<int, std::unordered_set<int>> adj_list;

public:
  Graph() { this->adj_list = {}; }

  bool addVertex(int);
  bool addEdge(int, int);
  bool removeEdge(int, int);
  bool removeVertex(int);

  std::unordered_set<int> children(int);
  void print();
};

#endif // GRAPH_H
