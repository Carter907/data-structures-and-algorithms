#include "stack.h"
#include <stdio.h>

void test_push_and_pop(Stack *stk);
void test_push_and_pop(Stack *stk);
void test_push_and_pop(Stack *stk);
void test_push_and_pop(Stack *stk);
void test_push_and_pop(Stack *stk);

int main() {

  Stack *stk = new_stack();

  test_push(stk);
  test_pop(stk);
  test_size(stk);
  test_cap(stk);

  return 0;
}

void test_push_and_pop(Stack *stk) {

  printf("pushing %d...\n", push(stk, 7));
  printf("pushing %d...\n", push(stk, 7));
  printf("pushing %d...\n", push(stk, 7));
  printf("pushing %d...\n", push(stk, 7));
}
