//試寫一程式將使用者輸入的攝氏溫度轉成華氏溫度 
#include <stdio.h>

int main(void){
	float x;
	
	printf("攝氏:");
	scanf("%f",&x);
	printf("華氏:%.2f",(x+40)*1.8-40);
	
	return 0;
} 
