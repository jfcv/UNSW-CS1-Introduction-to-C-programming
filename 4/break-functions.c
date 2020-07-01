// juan cuadros
// 10 August 2019
// sample program for revision lecture in break
// demoing functions

#include <stdio.h>

// you have to put the line of the function you're using for letting the program
// know that is what you're going to use
void showHorrorScope (int month);

int main (int argc, char *argv[]) {

	int monthNumber;
	printf ("please enter your month of birth\n");
	scanf ("%d", &monthNumber);
	showHorrorScope(monthNumber);
	return 0;
}

// using void functions just when you don't have to return anything
void showHorrorScope (int month) {

	if (month == 1) {
		printf ("You will have a great day today");
	} else if (month == 2) {
		printf ("Your future holds uncertainty");
	} else {
		printf ("you smell like roses");
	}

}
