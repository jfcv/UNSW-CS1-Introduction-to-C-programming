#include <stdio.h>
#include <ctype.h>
#include <assert.h>

//frecuency table of input
int main(int argc, char const *argv[]) {

  int counts[26];

  int countsLength;
  //this is because each int array's element in C occupies 4 bytes : 32 bits
  countsLength = sizeof(counts)/sizeof(int);

  //initialize the counts array with 0's, because we don't know what's stored in memory
  int j = 0;
  while (j < countsLength) {
    counts[j] = 0;
    j++;
  }

  int cypherChar = getchar();

  while (cypherChar != EOF) {
    if (isalpha(cypherChar)) {
      counts[tolower(cypherChar) - 'a']++;
    }
    cypherChar = getchar();
  }

  printf("The counts array length is: %d\n", countsLength);

  printf("Frequency table\n");

  int i  = 'a';
  while (i <= 'z') {
    printf("%c %d\n", i, counts[i - 'a']);
    i++;
  }

  return 0;
}
