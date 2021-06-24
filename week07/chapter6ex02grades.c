/*By Luis Mendez 
UPY Robotics 2C*/
#include <stdio.h>

char line [50];
int num;



int main(){
	
    printf("Enter the score: ");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%d", &num);
    
    
	if(num <= 100 && num > 90){
		printf("A grade");
	}
	
	if(num <= 90 && num > 80){
		printf("B grade");
	}
	
		if(num <= 80 && num > 70){
		printf("C grade");
	}
		if(num <= 70 && num > 60){
		printf("D grade");
	}
	 if(num <= 60){
	 	printf("F grade");
	 }
	 
	
	
}
