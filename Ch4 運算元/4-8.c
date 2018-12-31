//試寫一程式由使用者輸入半徑,計算球體的體積(球體體積 = 4/3 X 3.14r^3) 
#include <stdio.h>

int main(void){
	float r,pi = 3.14;
	
	printf("半徑:");
	scanf("%f",&r);
	printf("體積:%.2f",4*pi*r*r*r/3);
	
	return 0;
} 
