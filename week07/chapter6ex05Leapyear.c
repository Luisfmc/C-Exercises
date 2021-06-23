#include <stdio.h>

int year;
int main()
{
	printf("Enter year number: ");
	scanf("%d", &year);
{

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
}
