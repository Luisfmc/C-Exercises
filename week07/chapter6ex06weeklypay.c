/*By Luis Mendez 
UPY Robotics 2C*/
#include <stdio.h>
char line[50];
float pay, dllrs, hours;
int overtime;

int main(){
	
	printf ("Enter number of hours: \n");
	fgets (line, sizeof(line), stdin);
	sscanf (line, "%f", &hours);
	printf ("Enter weekly pay: \n");
	fgets (line, sizeof(line), stdin);
	sscanf (line, "%f", &dllrs);
	
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
