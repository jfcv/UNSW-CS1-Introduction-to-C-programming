#include <stdio.h>
#include <ctype.h>
#include <assert.h>

int sum(int count, int arr[]);
void readArray(int* count, int arr[]);
void prjntAbove(int threshold, int count, int arr[]);


//print input numbers that area above average
int main(int argc, char const *argv[]) {
  int count = 0;
  int total;
  int nums[100];

  readArray(&count, nums);

  assert(count>0);

  total = sum(count, nums);

  printf("Average is %lf\n", ((double)total/count));
  prjntAbove(total/count, count, nums);

  return 0;
}


int sum(int count, int arr[]){
  int i = 0;
  int total = 0;
  while (i < count) {
    total += arr[i];
    i++;
  }
  return total;
}


void readArray(int* count, int arr[]){

  *count = 0;
  int cNum;
  int returnCode = scanf("%d", &cNum);
  while (returnCode == 1) {
    arr[*count] = cNum;
    (*count)++;
    returnCode = scanf("%d", &cNum);
  }
}


//print all the elements of an array that are above a threshold
void prjntAbove(int threshold, int count, int arr[]) {

  int i = 0;
  while (i < count) {
    if(arr[i] > threshold){
      printf("%d\n", arr[i]);
    }
    i++;
  }

}
