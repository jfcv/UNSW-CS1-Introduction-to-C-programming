// week 2 sample lecture code 3
// by juan cuadros
// 27 jul 2019

#include <stdio.h>

#define COST_PER_SQ_METRE 6
//it costs $6 m^2 for cardboard
//for convention constants are defined that way!

int main (int argc, char* argv[]) {
	
	int length;
	int bredth;
	int cost;

	printf ("What is the length of the cake?\n");
	scanf("%d", &length);
	printf ("What is the bredth of the cake?\n");
	scanf("%d", &bredth);

	// 6 is the magic number of this program, change for a constant
	//cost = (length - bredth) * 6;
	
	cost = (length - bredth) * COST_PER_SQ_METRE;

	printf ("length = %d, bredth = %d, cost = %d\n", length, bredth, cost);

	return 0;
}