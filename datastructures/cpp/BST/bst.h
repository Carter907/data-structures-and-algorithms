#ifndef BST_H
#define BST_H

struct TreeNode {
  int value;
  TreeNode *left;
  TreeNode *right;
};

class BST {
  TreeNode *root;

public:
  int *search(const int &val);
};

#endif
