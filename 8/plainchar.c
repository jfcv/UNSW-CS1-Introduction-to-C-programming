// juan cuadros
// 30 december 2019
// the turing test lecture

#include <stdio.h>

int main (int argc, const char * argv[]) {

	int plainChar;

	while (plainChar != EOF) {
    plainChar = getchar();
		printf("[%c]\n",plainChar);
	}
	return  0;
}
