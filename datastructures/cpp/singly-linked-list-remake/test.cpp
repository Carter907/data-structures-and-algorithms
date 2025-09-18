#include "src/LinkedList.h"
#include "src/LinkedListUtil.h"
#include <catch2/catch_test_macros.hpp>
#include <iostream>

TEST_CASE("UNIT TEST 1", "[testing arithmetic]") {
  int fst_val = 1;

  LinkedList *list = new LinkedList(fst_val);

  ListNode *head = list->get_head();

  int lst_val = 10;

  ListNode *curr = head;
  for (int i = fst_val + 1; i <= lst_val; i++) {
    curr->next = new ListNode(i, nullptr);
    curr = curr->next;
  }

  traverse(head);

  ListNode *rev = reverse_list(head);

  traverse(rev);

  REQUIRE(head->value == fst_val);
  REQUIRE(rev->value == lst_val);
}
