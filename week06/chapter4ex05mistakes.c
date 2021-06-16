#include <stdio.h>

float floatingpoint;
int integer;
char charac;

int main() {
	floatingpoint = 9.9;
	integer = 10;
	charac = 'U';
	
	printf("Floating point: %f ---> Error: (%%d) %d\n", floatingpoint, floatingpoint);
	
	printf("Integer: %d ---> Error: (%%f) %f\n", integer, integer);
	
	printf("Character: %c ---> Error: (%%d) %d\n", charac, charac);
	
}
