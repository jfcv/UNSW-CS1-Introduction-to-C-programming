// week 2 sample lecture code
// by juan cuadros
// 27 jul 2019


#include <stdio.h>

int main (int argc, char* argv[]) {

	int dollars;
	int gstRoundingError;

	printf ("How many dollars do you have?\n");
	scanf("%d", &dollars);

	dollars = dollars / 2;
	gstRoundingError = dollars % 2;

	printf ("You now have $%d, glad to be of service\n", dollars);
	printf ("%d %% 2 is %d, glad to be of service\n", dollars, gstRoundingError);

	return 0;
}