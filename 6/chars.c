// juan cuadros
// 17 august 2019
// what to do when things go wrong lecture 

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef char byte;

int main (int argc, char * argv[]) {

	printf ("Please type in a number\n");
	byte number;
	scanf ("%c", &number);

	printf ("This is the encryptor of %d -> %d\n", number, number+1);

	printf ("%p", &number);

	//printf("This is the first character in the abet %d\n", 'A');

	return EXIT_SUCCESS;

}