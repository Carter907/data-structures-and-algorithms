//
// Created by carter on 6/22/25.
//

#include "hashtable.h"

void HashTable::printTable() const {
  for (int i = 0; i < TABLE_SIZE; i++) {
    std::cout << "Table[" << i << "] = " << std::endl;

    Node *curr = table[i];
    while (curr != nullptr) {
      std::cout << curr->key << " -> " << curr->value << std::endl;
      curr = curr->next;
    }
    std::cout << std::endl;
  }
}

int HashTable::hash(const std::string &key) const {
  int hash = 0;
  for (int i = 0; i < key.length(); i++) {
    hash = (hash + key[i] * 23) % TABLE_SIZE;
  }
  return hash;
}

void HashTable::set(const std::string &key, int value) {
  int h = hash(key);

  if (this->table[h] == nullptr) {
    table[h] = new Node(key, value);
  } else {
    Node *curr = table[h];

    while (curr->next != nullptr) {
      curr = curr->next;
    }
    curr->next = new Node(key, value);
  }
}
