
#include "bst.h"

int *BST::search(const int &el) {
  TreeNode *ptr = root;

  while (ptr != nullptr) {
    if (el == ptr->value)
      return &ptr->value;
    else if (el < ptr->value)
      ptr = ptr->left;
    else
      ptr = ptr->right;
  }

  return nullptr;
}
