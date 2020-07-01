#include <stdio.h>
#include <ctype.h>
#include <assert.h>

//encrypt with a substitution cjpher
int main(int argc, char const *argv[]) {
  char cjpher[] = "bcdefghijklmnopqrstuvwxyza";
  int cjpherChar = getchar();
  while (cjpherChar != EOF) {
    if (isalpha(cjpherChar)) {
      putchar(cjpher[tolower(cjpherChar - 'a')]);
    } else {
      putchar(cjpherChar);
    }
    cjpherChar = getchar();
  }
  return 0;
}
