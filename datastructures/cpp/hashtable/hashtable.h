//
// Created by carter on 6/22/25.
//

#ifndef HASHTABLE_H
#define HASHTABLE_H
#include <iostream>
#include <ostream>

#include "node.h"

class HashTable {

private:
  static const int TABLE_SIZE = 10;
  Node *table[TABLE_SIZE] = {};

public:
  int hash(const std::string &key) const;
  void printTable() const;
  void set(const std::string &key, int value);
};

#endif // HASHTABLE_H
