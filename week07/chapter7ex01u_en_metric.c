#include <stdio.h> 
#include <string.h> 

char line[100];
float u_en, u_c;
int c;
int main (){
	
	printf("Enter your number: \n");
	fgets(line, sizeof(line), stdin);
    sscanf(line, "%f", &u_en);
    printf("Your number is: %f\nNow choose the type of conversion\n", u_en);
	printf("1. Lb to Kg \n");
	printf("2. Miles to Km \n");
	printf("3. Gal to Li \n");
	printf("4. Yard to meter\n");
	printf("5. Inch to cm\n");
	printf("6. Ft to cm\n");
	printf("Option: ");
	
	fgets(line, sizeof(line), stdin);
    sscanf(line, "%d", &c);
    
	if(c == 1){
	u_c = u_en / 2.204623;
	printf("%f lb = %f kg", u_en, u_c);
	}	
	else if(c==2){
	u_c = u_en * 1.609344;
	printf("%f mi = %f km", u_en, u_c);
	}
	else if(c==3){
	u_c = u_en * 3.785411;
	printf("%f gal = %f li", u_en, u_c);
	}
	else if(c==4){
	u_c = u_en * 0.9144;
	printf("%f yard = %f m", u_en, u_c);
	}
	else if(c==5){
	u_c = u_en * 2.54;
	printf("%f inch = %f cm", u_en, u_c);
	}
	else if(c==6){
	u_c = u_en * 30.48;
	printf("%f ft = %f cm", u_en, u_c);
	}

return 0;


}
	
	
