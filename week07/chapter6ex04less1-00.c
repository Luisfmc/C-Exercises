#include <stdio.h>

float money;
int quarters, dimes, nickels, pennies;
int main()
{
	printf("Amount less 1.00\n");
	scanf("%f", &money);

	while (money > 0.00 && money <= 1.00) {
		
		if (money >= 0.25) {
			++quarters;
			money -= 0.25;
		}
		else if (money >= 0.10) {
			++dimes;
			money -= 0.10;
		}
		else if (money >= 0.05) {
			++nickels;
			money -= 0.05;
		}
		else {
			++pennies;
			money -= 0.01;
		}
	}
	
	
	printf("%d quarters\n", quarters);
	printf("%d dimes\n", dimes);
	printf("%d nickels\n", nickels);
	printf("%d pennies\n", pennies);	

	
	if(money > 1.00){
			printf("The value is not correct\n");

		}
	
}
