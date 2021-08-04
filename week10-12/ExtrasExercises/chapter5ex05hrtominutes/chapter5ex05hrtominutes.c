#include <stdio.h>
#include <stdlib.h>
int main()
{
   int num;
   FILE *fptr;
   fptr = fopen("chapter5ex05hrtominutes.txt","w+");

   if(fptr == NULL)
   {
    printf("Error :(");   
    exit(1);             
   }
	
int main; 
int hour, minutes, tminutes;
const int ph = 60;
char line_text[50];

printf("Enter hours: ");
fgets(line_text, sizeof(line_text), stdin);
sscanf(line_text, "%d", &hour);

printf("Enter minutes: ");
fgets(line_text, sizeof(line_text), stdin);
sscanf(line_text, "%d", &minutes);

tminutes = (minutes) + (hour * ph);

printf ("%d:%d -----> Total minutes: %d\n", hour, minutes, tminutes);

fprintf (fptr, "Total of minutes: %d\n", tminutes);
fclose(fptr);
}
