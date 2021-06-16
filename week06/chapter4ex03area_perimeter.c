#include<stdio.h> 

// w (width)
// h ( height)    

int w;          
int h;         

int area;           
int perimeter;      

int main() {
	h = 5;
	w = 3;
	
	area = h * w;
	printf("Area = %d square inches\n", area);

    perimeter = 2*(h + w);
	printf("Perimeter= %d inches\n", perimeter);

}


/* What changes must be made to the program so that it works for a rectangle with a width of 6.8 inches and a length of 2.3 inches?
 For a rectangle with its measurements we must declare the measurements as a float since it contains decimals.
 
 Example:
 
 ******************************************************************************************************************************************
#include <stdio.h> 

// w (width)
// h ( height)    

float w;          
float h;         

float area;           
float perimeter;      

main() {
	h = 6.8;
	w = 2.3;
	
	area = h * w;
	printf("Area = %f square inches\n", area);

    perimeter = 2*(h + w);
	printf("Perimeter= %f inches\n", perimeter);

}
 
 ******************************************************************************************************************************************
