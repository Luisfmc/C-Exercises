#include <stdio.h>
int main (){
	int h, m, tm;
	printf ("Enter minutes: ");
	scanf ("%d", &tm);
	
	h = tm/60;
	m = tm%60;
	
	printf ("%dh:%dm", h, m);
	
}
