#include <stdio.h>
#include <assert.h>

//function to swap two ints
void swap(int* a, int* b); //you have to declare a function to use it previous to the main

int main(int argc, char const *argv[]) {
  int x = 42;
  int y = 197;
  printf("x = %d y = %d\n", x, y);
  swap(&x,&y);
  printf("x = %d y = %d\n", x, y);
  return 0;
}

void swap(int* a, int* b) {
  int temp;
  temp = *a;
  *a = *b;
  *b = temp;
}
