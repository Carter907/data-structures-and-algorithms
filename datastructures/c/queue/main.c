#include "queue.h"
#include <stdio.h>

int main() {
  Queue *q = new_queue();
  for (int i = 0; i < 10; i++) {
    enqueue(q, i);
  }
  print_queue(q);
  for (int i = 0; i < 5; i++) {
    int next_in_line = dequeue(q);
    printf("whos next: %d\n", next_in_line);
    print_queue(q);
  }
  clear_queue(q);
  enqueue(q, 5);
  print_queue(q);

  return 0;
}
