
// countdown 
// seconds till the end of the assignment
// juan cuadros
// 6 august 2019

#include <stdio.h>
#include <stdlib.h>

#define HOURS_PER_DAY 24
#define MINS_PER_HOUR 60
#define SECS_PER_MIN 60
#define SECONDS_PER_DAY (HOURS_PER_DAY * MINS_PER_HOUR * SECS_PER_MIN)

int daysToSeconds (int daysLeft);

int main (int argc, char *argv[]) {

	//if you're your variable throughtout the program declare it on the top.
	
	int daysLeft; 
	int secondsLeft;

	printf ("How many whole days to go?\n");
	scanf ("%d", &daysLeft);	
	
	// days are converted into seconds 
	secondsLeft = daysToSeconds (daysLeft);

	printf ("You have ONLY %d seconds left\n", secondsLeft);
	
	// EXIT_SUCCESS is pre defined constant "return 0" saved on the <stdlib.h> library 
	return EXIT_SUCCESS; 

}

int daysToSeconds (int daysLeft) {
	
	return (daysLeft * SECONDS_PER_DAY);
}