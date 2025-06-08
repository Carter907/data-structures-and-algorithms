
#include "bst.h"
#include <queue>
#include <vector>

std::ostream &operator<<(std::ostream &stream, const BST &bst) {

  std::vector<int> contents = bst.breadthFirstSearch();

  stream << "(( ";

  for (auto &n : contents) {
    stream << n << ", ";
  }

  stream << "))" << std::endl;

  return stream;
}

bool BST::insert(int el) {

  if (root == nullptr) {

    root = new TreeNode{
        el,
    };
  }

  TreeNode *new_node = new TreeNode{
      el,
  };

  TreeNode *curr = root;
  while (true) {
    if (curr->value == new_node->value) {
      return false;
    }
    if (new_node->value < curr->value) {
      if (curr->left) {
        curr = curr->left;
      } else {
        curr->left = new_node;
        return true;
      }
    }
    if (new_node->value > curr->value) {
      if (curr->right) {
        curr = curr->right;
      } else {
        curr->right = new_node;
        return true;
      }
    }
  }

  return true;
}
// bool BST::remove(int el) { return 0; }
// bool BST::empty() { return true; }
std::vector<int> BST::breadthFirstSearch() const {
  if (!root)
    return {};

  std::queue<TreeNode *> q;
  std::vector<int> res;

  q.push(root);

  while (!q.empty()) {
    for (long unsigned int i = 0; i < q.size(); i++) {

      TreeNode *n = q.front();
      q.pop();

      res.push_back(n->value);

      if (n->left)
        q.push(n->left);
      if (n->right)
        q.push(n->right);
    }
  }

  return res;
}
// std::vector<int> BST::depthFirstSearch() {}
