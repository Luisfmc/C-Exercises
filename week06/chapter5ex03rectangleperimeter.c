#include<stdio.h>

int main (){
	
	float perimeter, h, w;
	
	printf ("Enter height: ");
	scanf ("%f", &h);
	
	printf ("Enter width: ");
	scanf ("%f", &w);
	
	perimeter = 2.0 * (h + w);
	
	printf ("Perimeter: %f\n", perimeter);
	
}
