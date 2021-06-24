/*By Luis Mendez 
UPY Robotics 2C*/
#include <stdio.h>
#include <string.h>

char  line[50];
float amount, tax, totalamount;  

int main(){
	printf("Enter the amount: $");
	fgets(line, sizeof(line), stdin);
	sscanf(line, "%f", &amount);

	tax = amount * 0.08;
	totalamount = amount + tax;

	printf("Tax: $%.2f\n", tax);
	printf("Total amount with tax: $%.2f\n", totalamount);
}
