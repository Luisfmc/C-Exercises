/*By Luis Mendez 
UPY Robotics 2C*/
#include <stdio.h>

char line[50];
int year;
int main()
{
	printf("Enter year number: ");
	fgets(line, sizeof(line), stdin);
	sscanf(line, "%d", &year);

	if((year % 4) == 0){
		printf("Leap");	
	
	}
	else if((year % 100) == 0 && (year % 400) != 0){
		printf("No leap");
	}
	else {
		printf("No leap");
	}


}
