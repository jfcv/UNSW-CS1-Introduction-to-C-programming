#include <stdio.h>
#include <stdlib.h>

typedef struct node *nodePtr;

struct node {
  int value;
  nodePtr next;
};

typedef struct node node;

int main(int argc, char const *argv[]) {

  nodePtr first = NULL;

  first = malloc(sizeof(node));
  first->next = NULL;

  first->value = 61;

  (first->next)->next = malloc(sizeof(node));
  (first->next)->value = 62;

  printf("this is the first of the lists %s and this is the second one %s\n", first->value, (first->next)->value);

  return 0;
};
