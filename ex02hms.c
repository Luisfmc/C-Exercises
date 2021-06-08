#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	int h, m, s, HOUR;
	
	printf("Enter seconds:");
	scanf("%d", &HOUR);
	
	h = HOUR / 3600;
	HOUR = HOUR % 3600;
	m = HOUR / 60;
	s = HOUR % 60;
	
	printf("%dh:%dm:%ds", h, m, s);
	
}
