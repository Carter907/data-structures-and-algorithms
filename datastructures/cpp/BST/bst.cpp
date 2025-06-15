
#include "bst.h"
#include <queue>
#include <stack>
#include <vector>

std::ostream &operator<<(std::ostream &stream, const BST &bst) {

  std::vector<int> contents = bst.depthFirstSearch();

  stream << "(( ";

  for (auto &n : contents) {
    stream << n << ", ";
  }

  stream << "))" << std::endl;

  return stream;
}
bool BST::contains(int el) {

  TreeNode *curr = root;
  while (curr) {
    if (el < curr->value) {
      curr = curr->left;
    } else if (el > curr->value) {
      curr = curr->right;
    } else {
      return true;
    }
  }

  return false;
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

std::vector<int> BST::depthFirstSearch() const {

  if (!root)
    return {};

  std::stack<TreeNode *> stk;
  std::stack<TreeNode *> stk2;
  std::vector<int> res;

  stk.push(root);

  while (!stk.empty()) {
    TreeNode *n = stk.top();
    if (!n->left && !n->right) {
    }

    stk2.push(n->right);
    stk2.push(n->left);

    std::cout << n->value << std::endl;
  }
  return res;
}
