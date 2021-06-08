#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// i1 = investor 1
// i2 = investor 2
// i3 = investor 3
// i = total
// pi (1, 2, 3) = percentage per investment

int main(){

float i1, i2, i3, i, pi1, pi2, pi3;
printf ("Enter the amount of the first investor: \n");
scanf ("%f",&i1);
printf ("Enter the amount of the second investor: \n");
scanf ("%f", &i2);
printf ("Enter the amount of the third investor: \n");
scanf ("%f", &i3);

i = i1 + i2 + i3;
pi1 = (i1/i) * 100;
pi2 = (i2/i) * 100;
pi3 = (i3/i) * 100;
printf("Percentage per inverstment \n Investor 1: %f percent \n Investor 2: %f percent\n Invertor 3: %f percent\n", pi1, pi2, pi3);


}
