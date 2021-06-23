#include <stdio.h>

int main(){
	int num;
    printf("Enter the Number: ");
    scanf("%d", &num);
    
	
	if (num >= 0 && num <= 60){
	printf("F grade");	
	}
	
	else if (num >= 64 && num <=67){
	printf("D grade");
}
	if (num >=61 && num <= 63){
	printf("D- grade");
}
	 else if (num >= 68 && num < 71) {
	printf("D+ grade");
	
	}
	if (num >=71 && num <= 80){
		if(num >= 74 && num <= 77){
			printf("C grade");
		}
		else if(num >= 71 && num <= 73){
			printf("C- grade");
		}
		
		else if(num >= 78 && num <= 80){
			printf("C+ grade");
		}
		
	}
	
	if (num >=81 && num <= 90){
		if(num >= 84 && num <= 87){
			printf("B grade");
		}
		else if(num >= 81 && num <= 83){
			printf("B- grade");
		}
		
		else if(num >= 88 && num <= 90){
			printf("B+ grade");
		}
		
	}
	
	if (num >=91 && num <= 100){
		if(num >= 94 && num <= 97){
			printf("A| grade");
		}
		else if(num >= 91 && num <= 93){
			printf("A- grade");
		}
		
		else if(num >= 98 && num <= 100){
			printf("A+ grade");
		}
		
	}
	
}
	
