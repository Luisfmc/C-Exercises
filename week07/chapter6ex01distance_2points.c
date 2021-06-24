/*By Luis Mendez 
UPY Robotics 2C*/
#include<stdio.h>
#include<math.h>

int main()
{;
	char line[50];
   int x1, y1, x2, y2, x, y, d, z; 
   /*
    (x1, y1) are the first point
	(x2, y2) are the second point
	
   x = (x2-x1)
   y = (y2-y1)
   z = square distance
    */
    
   printf("POINT 1- Enter coordinates (Example: 5 6): ");
   fgets(line, sizeof(line), stdin);
   sscanf(line, "%d %d", &x1, &y1);
   

   printf("POINT 1- Enter coordinates (Example: 5 6): ");
   fgets(line, sizeof(line), stdin);
   sscanf(line, "%d %d", &x2, &y2);

   x = (x2-x1);
   y = (y2-y1);

   d = (x*x + y*y);
   z = (x*x + y*y)*(x*x + y*y);
   printf("Distance = %d \n", d);
   printf("Square distance = %d", z);
}
