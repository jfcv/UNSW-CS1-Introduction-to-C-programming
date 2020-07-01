#include <stdio.h>
#include <stdlib.h>

typedef unsigned char byte;

int main (int argc, const char * argv[]){

	byte b1=0;
	byte b2=0;
	int i1=0;
	byte b3=0;
	byte b4=0;
	byte b5=0;
	byte b6=0;

	printf(" b1 (%p) = %x\n", &b1, b1);
	printf(" b2 (%p) = %x\n", &b2, b2);
	printf(" i1 (%p) = %d\n", &i1, i1);
	printf(" b3 (%p) = %x\n", &b3, b3);
	printf(" b4 (%p) = %x\n", &b4, b4);
	printf(" b5 (%p) = %x\n", &b5, b5);
	printf(" b6 (%p) = %x\n", &b6, b6);

	return EXIT_SUCCESS;
}