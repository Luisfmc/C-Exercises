#include <stdio.h>

int main(){
	    int num;
    printf("Enter the Number: ");
    scanf("%d", &num);
    
	
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
