#include "stack.h"
#include <stdio.h>
#include <stdlib.h>

Stack *new_stack() {

  Stack *stk = malloc(sizeof(Stack));
  stk->contents = malloc(sizeof(int[INITIAL_CAPACITY]));
  stk->cap = INITIAL_CAPACITY;
  stk->size = 0;

  return stk;
}
int push(Stack *stk, int value) {

  if (stk->size == stk->cap) {
    stk->contents = realloc(stk->contents, sizeof(int[stk->size * 2]));
  }

  stk->contents[stk->size] = value;
  stk->size++;

  return value;
}
int pop(Stack *stk) {

  if (stk->size == 0) {
    printf("cannot pop from empty stack\n");
    exit(1);
  }

  int popped_value = stk->contents[stk->size - 1];
  stk->size--;

  return popped_value;
}
int peek(Stack *stk) {
  if (stk->size == 0) {
    printf("cannot peek from empty stack\n");
    exit(1);
  }

  return stk->contents[stk->size - 1];
}
void print_stack(Stack *stk) {

  printf("_\n");
  for (int i = stk->size - 1; i >= 0; i--) {
    printf("%d\n", stk->contents[i]);
  }
}
int is_empty(Stack *stk) {

  if (stk->size == 0) {
    return 1;
  }

  return 0;
}
