/*試寫一個程式,宣告三個整數變數,初值分別為95、74、81,並計算出3個變數的平均數後輸出,平均值請包含小數點*/
#include <stdio.h>

int main(void){
	int a = 95,b = 74,c = 81;
	float answer = (float)(a+b+c)/3;
	
	printf("%.1f",answer);
	
	return 0;
} 
