
// juan cuadros
// 11 august 2019
// demo program week 3 lecture 1 "add up 1..n"

#include <stdio.h>
#include <stdlib.h>

int sumToN (int n);

int main(int argc, char *argv[]) {

  int n;

  printf("enter a number\n");
  scanf("%d", &n);

  printf(" sum 1..n = %d\n", sumToN(n));

  return EXIT_SUCCESS;
}

int sumToN (int n) {

  int sum;

  if (n == 0) {
    sum = 0;
  } else {
    // this is call RECURSION !
    sum = n + sumToN (n-1);
  }
  return sum;

}
