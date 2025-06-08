
#include "bst.h"
#include <queue>
#include <vector>

void BST::insert() {}
int BST::remove() { return 0; }
bool BST::empty() { return true; }
std::vector<int> BST::breadthFirstSearch() {
  if (!root)
    return {};

  std::queue<TreeNode *> q;
  std::vector<int> res;

  q.push(root);

  while (!q.empty()) {
    for (int i = 0; i < q.size(); i++) {

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
std::vector<int> BST::depthFirstSearch() {}
