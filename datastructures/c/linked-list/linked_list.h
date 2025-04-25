#ifndef LISTNODE_H
#define LISTNODE_H

struct ListNode {
  int value;
  struct ListNode *next;
};

typedef struct ListNode ListNode;

void add_first(ListNode **head, int value);
void add_last(ListNode **head, int value);
void print_list(ListNode **head);
void remove_all(ListNode **head);

#endif
