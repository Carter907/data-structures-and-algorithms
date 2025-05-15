#ifndef STACK_H
#define STACK_H

#define INITIAL_CAPACITY 10

struct Stack {
  int *contents;
  int size;
  int cap;
};

typedef struct Stack Stack;

Stack *new_stack();
int size(Stack *stk);
int push(Stack *stk, int value);
int pop(Stack *stk);
int peek(Stack *stk);
void print_stack(Stack *stk);
int is_empty(Stack *stk);

#endif
