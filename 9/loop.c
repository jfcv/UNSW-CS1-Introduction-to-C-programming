#include <stdio.h>
#include <ctype.h>
#include <assert.h>

// #define NOT_EOF 25

int main(int argc, char const *argv[]) {

  //assert (NOT_EOF != EOF)
  double eCount = 0;
  double letterCount = 0;
  double result = 0;

  int cypherChar = getchar();
  while (cypherChar != EOF) {

    if (isalpha(cypherChar)) {
      letterCount++;
      if (cypherChar == 'e') {
        eCount++;
      }
    }
    cypherChar = getchar();
  }

  assert(letterCount > 0);

  result = eCount/letterCount;

  printf("proportion of e's is %lf\n", result);
  return 0;
}
