//
// Created by carter on 6/22/25.
//

#ifndef GRAPH_H
#define GRAPH_H

#include <unordered_map>
#include <unordered_set>

class Graph {

  std::unordered_map<int, std::unordered_set<int>> vertices;

public:
  Graph() { this->vertices = {}; }

  void addVertex(int);
  void removeVertex(int);
  std::unordered_set<int> children(int);
};

#endif // GRAPH_H
