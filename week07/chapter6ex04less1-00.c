/*By Luis Mendez 
UPY Robotics 2C*/
#include <stdio.h>

char line [50];
float money;
int q, d, n, p;
int main()
/* 
q=quarters
d = dimes
n = nickels
p=pennies
*/
{
	printf("Amount less 1.00\n");
	fgets(line, sizeof(line), stdin);
	sscanf(line, "%f", &money);

	while (money > 0.00 && money <= 1.00) {
		
		if (money >= 0.25) {
			++q;
			money -= 0.25;
		}
		else if (money >= 0.10) {
			++d;
			money -= 0.10;
		}
		else if (money >= 0.05) {
			++n;
			money -= 0.05;
		}
		else {
			++p;
			money -= 0.01;
		}
		
	}
	printf("%d quarters\n", q);
	printf("%d dimes\n", d);
	printf("%d nickels\n", n);
	printf("%d pennies\n", p);

	
	if(money > 1.00){
			printf("The value is not correct\n");
		}
	
}
