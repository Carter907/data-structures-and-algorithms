template <class T> class BSTNode {
public:
  BSTNode() { left = right = 0; }
  BSTNode(const T &e, BSTNode<T> *l = 0, BSTNode<T> *r = 0) {
    el = e;
    left = l;
    right = r;
  }
  T el;
  BSTNode<T> *left, *right;
};
