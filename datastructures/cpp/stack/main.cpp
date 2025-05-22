#include "stack.h"
#include <cstring>
#include <iostream>

using namespace std;

int main() {

  Stack *stk = new Stack();

  stk->push(5);
  stk->push(2);

  for (int i = 0; i < stk->size(); i++) {
  }

  return 0;
}
