//
// Created by carter on 6/22/25.
//

#include "graph.h"
#include <type_traits>

void Graph::addVertex(int v) { this->vertices[v] = {}; }
void Graph::removeVertex(const int vert) {
  if (this->vertices.count(vert) == 0) {
    return;
  }

  this->vertices.erase(vert);

  for (const auto &[k, v] : this->vertices) {

    static_assert(std::is_same_v<decltype(v), std::unordered_set<int>>,
                  "not that type");

    if (v.count(vert) != 0)
      v.erase(vert);
  }
}
std::unordered_set<int> Graph::children(int v) { return this->vertices.at(v); }
