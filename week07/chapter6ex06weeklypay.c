#include <stdio.h>

float pay, dllrs, hours;
int overtime;

int main(){
	
	printf ("Enter number of hours: \n");
	scanf ("%f", &hours);
	printf ("Enter weekly pay: \n");
	scanf ("%f", &dllrs);
	
	if (hours <= 40){
		pay = hours * dllrs;
	}
	else {
		overtime = hours - 40;
		pay = 40 * dllrs;
		pay += overtime * (dllrs / 2);
		
		
	}
	printf("Pay: %f \n", pay);
	
	
	
}
