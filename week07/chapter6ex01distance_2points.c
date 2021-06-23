#include<stdio.h>
#include<math.h>

int main()
{
   int x1, y1, x2, y2, x, y, d; 
   /*
    (x1, y1) are the first point
	(x2, y2) are the second point
	
   x = (x2-x1)
   y = (y2-y1)
    */
   printf("POINT 1- Enter coordinates (Example: 5 6): ");
   scanf("%d %d",&x1, &y1);

   printf("POINT 2- Enter coordinates (Example: 6 5): ");
   scanf("%d %d",&x2, &y2);

   x = (x2-x1);
   y = (y2-y1);

   d = sqrt(x*x + y*y);
   
   printf("Distance = %d", d);
   
}
