// juan cuadros
// 17 august 2019
// what to do when things go wrong lecture 

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int sumToN (int n);

int main (int argc, char * argv[]) {

	int number;

	printf("Enter a number\n");
	scanf("%d", &number);

	printf ("sumToN (%d) = %d\n", number, sumToN(number));

	return EXIT_SUCCESS;

}

int sumToN (int n) {
	assert (n >= 0); //allows to keep track of  the program results compared with its ideal performance

	int sum;
	if (n==0) {
		sum = 0;
	} else {
		sum = n + sumToN (n-1);
	}
	return sum;
}