#include <iostream>
using namespace std;
class ListNode {

public:
  int value;
  ListNode *next;

  ListNode(int value, ListNode *next) {
    this->value = value;
    this->next = next;
  }
};

class LinkedList {

private:
  ListNode *head;
  ListNode *tail;
  int length;

public:
  LinkedList(int value) {

    head = new ListNode(value, nullptr);
    tail = head;
  }
};
int main() {

  auto head = new ListNode(
      5, new ListNode(2, new ListNode(8, new ListNode(7, nullptr))));

  for (ListNode *curr = head; curr != nullptr; curr = curr->next) {
    cout << curr->value << '\n';
  }

  cout << endl;

  return 0;
}
