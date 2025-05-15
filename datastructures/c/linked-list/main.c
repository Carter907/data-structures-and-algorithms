#include "linked_list.h"
#include <stdlib.h>

void rotate(ListNode *node) {
  ListNode *curr, *prev;

  for (curr = node, prev = NULL; curr->next != NULL;
       prev = curr, curr = curr->next) {
  }
}

int main() {
  ListNode *list = malloc(sizeof(ListNode));

  for (int i = 0; i < 10; i++) {
    add_last(&list, i + 1);
  }
  print_list(&list);
  remove_all(&list);

  list = malloc(sizeof(ListNode));
  for (int i = 0; i < 10; i++) {
    add_last(&list, i + 1);
  }

  print_list(&list);
  remove_all(&list);
  return 0;
}
