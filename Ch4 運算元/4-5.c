//�ռg�@�{���p��H�U���ƾǤ�{��(x�ȥѨϥΪ̿�J)1/x+1/x^2+1/x^3 
#include <stdio.h>

int main(void){
	float x;
	
	printf("1/x+1/x^2+1/x^3\n");
	printf("x = ");
	scanf("%f",&x);
	printf("1/x+1/x^2+1/x^3 = %.3f",1/x+1/(x*x)+1/(x*x*x));
	
	return 0;
} 
