#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	const float PI = 3.14159265;
	float radius, height, area, volume;
	
	
	printf("Enter cylinder radius:");
	scanf("%f", &radius);
	printf("Enter cylinder height:");
	scanf("%f", &height);
	
	area = 2 * PI * radius * (radius + height);
	volume = PI * (radius * radius) * height;
	printf ("Area: %f\nVolume: %f", area, volume);
}
