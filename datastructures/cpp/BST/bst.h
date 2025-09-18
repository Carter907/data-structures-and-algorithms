
#ifndef BST_H
#define BST_H

#include <iostream>
#include <random>
#include <vector>

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

  bool insert(int el);
  bool contains(int el);
  bool remove(int el);
  bool empty() const;
  std::vector<int> breadthFirstSearch() const;
  std::vector<int> depthFirstSearch() const;
};

std::ostream &operator<<(std::ostream &stream, const BST &bst);

#endif
