#include <vector>

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
  BST(TreeNode *root) : root(root) {}
  BST(int value) {
    root = new TreeNode{
        value,
    };
  }

  void insert();
  int remove();
  bool empty();
  std::vector<int> breadthFirstSearch();
  std::vector<int> depthFirstSearch();
};

#endif
