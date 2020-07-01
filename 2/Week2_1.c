// week 2 sample lecture code 2
// by juan cuadros
// 27 jul 2019

#include <stdio.h>

int main (int argc, char* argv[]) {
	
	int dollars;
	int cents;
	int output;

	printf ("How many dollars do you have?\n");
	scanf("%d", &dollars);
	printf ("How many cents do you have?\n");
	scanf("%d", &cents);

	output = (dollars - cents) * 6;

	printf ("dollars = %d, cents = %d, output = %d\n", dollars, cents, output);

	return 0;
}