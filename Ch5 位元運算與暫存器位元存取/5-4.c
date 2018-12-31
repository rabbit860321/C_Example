//試寫一個程式,利用位移算符,計算1/2 1/4 1/8音速的時速(假設音速為每秒343.2公尺) 
#include<stdio.h>

int main(void){
	float speed = 343.2;
	
	printf("1/2音速:%d\n",(int)speed>>1);
	printf("1/4音速:%d\n",(int)speed>>2);
	printf("1/8音速:%d\n",(int)speed>>3);
} 
