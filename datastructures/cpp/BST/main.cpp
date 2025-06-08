#include "bst.h"
#include <iostream>

int main() {

  BST *bst = new BST(5);

  bst->insert(2);
  bst->insert(3);
  bst->insert(7);
  bst->insert(1);
  bst->insert(8);
  bst->insert(6);

  std::cout << *bst << std::endl;

  return 0;
}
