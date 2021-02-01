#include <stdio.h>
#include <stdlib.h>

struct char_stack {
  int n_items;
  char items[512];
};

struct char_stack *new();
void print(struct char_stack *stack);
int push(struct char_stack *stack, char item);
int pop(struct char_stack *stack);
int is_empty(struct char_stack *stack);

struct char_stack *new() {
  struct char_stack *stack = malloc(sizeof(struct char_stack));
  stack->n_items = 0;
  return stack;
}

void print(struct char_stack *stack) {
  printf("char_stack { items: %d } [ ", stack->n_items);
  for (int i = 0; i < stack->n_items; i++ ) {
    printf("%c, ", stack->items[i]);
  }
  printf("]\n");
}

int push(struct char_stack *stack, char item) {
  stack->items[stack->n_items] = item;
  stack->n_items += 1;
  return stack->n_items;
}

int pop(struct char_stack *stack) {
  if (is_empty(stack)) return 1;
  return 0;
}

int is_empty(struct char_stack *stack) {
  if (stack->n_items == 0) return 1;
  return 0;
}


int main(int argc, char *argv[]) {
  struct char_stack *stack = new();
  print(stack);
  push(stack, 'l');
  push(stack, 'a');
  push(stack, 'r');
  push(stack, 'd');
  print(stack);
}

// TODO receive commands via CLI
// TODO write auto tests in bash
// TODO write stack to file
// TODO read stack to file
// TODO enable varied size stack creation
// TODO write and read from files
