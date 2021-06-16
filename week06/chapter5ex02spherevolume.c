#include<stdio.h>

int main()
{
	const float pi = 3.14159265359;
	float r, v;
	

printf ("Enter the sphere radius: ");
scanf ("%f", &r);

v = ((4.0/3.0)* pi) * (r*r*r);

printf ("Sphere Volume: %f\n",  v);




	
}
