#include "LinkedListUtil.h"
#include <iostream>

ListNode *reverse_list(ListNode *head) {
  if (head == nullptr)
    return nullptr;
  ListNode *prev = nullptr;
  while (head != nullptr) {
    auto tmp = head->next;
    head->next = prev;
    prev = head;
    head = tmp;
  }

  delete head;

  return prev;
}

void traverse(ListNode *head) {

  while (head != nullptr) {
    std::cout << head->value << '\n';
    head = head->next;
  }
}
