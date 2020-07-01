// comments are make like this
// this is the demo code in com1917
// by: juan cuadros 
// date: 27 jul 19

#include <stdio.h>


// because it uses the word 'int' the program is expecting to return a number

int main (int argc, char* argv[]) 
{
	int numberOfChickens;
	
	printf ("how many chickens do i have?\n");
	scanf ("%d", &numberOfChickens);
	printf ("i have %d chickens\n", numberOfChickens);

	if (numberOfChickens == 0) {
	printf ("BING!");
	} else {
	printf ("BONG!");
	}

	return 0;

}