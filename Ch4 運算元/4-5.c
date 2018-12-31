//試寫一程式計算以下的數學方程式(x值由使用者輸入)1/x+1/x^2+1/x^3 
#include <stdio.h>

int main(void){
	float x;
	
	printf("1/x+1/x^2+1/x^3\n");
	printf("x = ");
	scanf("%f",&x);
	printf("1/x+1/x^2+1/x^3 = %.3f",1/x+1/(x*x)+1/(x*x*x));
	
	return 0;
} 
