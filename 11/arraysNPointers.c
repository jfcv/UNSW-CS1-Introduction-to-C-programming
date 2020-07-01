#include <stdio.h>
#include <assert.h>

int main(int argc, char const *argv[]) {
  int a[10];
  printf("address of the array a = %p\n", &a);

  int arrayLength;
  arrayLength = sizeof(a)/sizeof(int);

  printf("the addresses for each element in the array are:\n");
  
  int i = 0;
  while (i < arrayLength) {
    printf("address of a[%d] = %p\n", i, &a[i]);
    i++;
  }

  return 0;
}
