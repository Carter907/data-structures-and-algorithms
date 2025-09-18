#include <iostream>
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
