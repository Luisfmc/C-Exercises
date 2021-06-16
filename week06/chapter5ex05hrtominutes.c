#include <stdio.h>
int hour, minutes, tminutes;

int main()
{
	
printf ("Enter hours: ");
scanf ("%d", &hour);

printf ("Enter minutes: ");
scanf ("%d", &minutes);

tminutes = (minutes) + (hour * 60);

printf ("%d:%d -----> Total minutes: %d\n", hour, minutes, tminutes);
}

