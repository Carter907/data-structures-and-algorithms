#include "graph.h"
#include <iostream>

void Graph::print() {

  for (const auto &vert : adj_list) {
    std::cout << std::to_string(vert.first) + " : [ ";
    for (const auto &edge : vert.second) {
      std::cout << edge << ',' << ' ';
    }
    std::cout << ']' << '\n';
  }
}

void Graph::addVertex(int v) { this->adj_list[v] = {}; }

bool Graph::addEdge(int v1, int v2) {

  // the adj_list must exist in order to make an edge.
  if (this->adj_list.find(v1) != this->adj_list.end() &&
      this->adj_list.find(v2) != this->adj_list.end()) {

    this->adj_list.at(v1).insert(v2);
    this->adj_list.at(v2).insert(v1);

    return true;
  }

  return false;
}

bool Graph::removeEdge(int v1, int v2) {
  if (this->adj_list.find(v1) != this->adj_list.end() &&
      this->adj_list.find(v2) != this->adj_list.end()) {
    this->adj_list.at(v1).erase(v2);
    this->adj_list.at(v2).erase(v1);

    return true;
  }
  return false;
}

bool Graph::removeVertex(const int vert) {
  if (this->adj_list.find(vert) == adj_list.end()) {
    return false;
  }

  for (auto other_vert : this->adj_list.at(vert)) {
    this->adj_list.at(other_vert).erase(vert);
  }

  this->adj_list.erase(vert);
  return true;
}
std::unordered_set<int> Graph::children(int v) { return this->adj_list.at(v); }
