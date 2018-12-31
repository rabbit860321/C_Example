//試寫一程式計算重量度量衡的轉換,輸入公斤,程式會換算成磅(1公斤=2.2磅) 
#include <stdio.h>

int main(void){
	int x;
	
	printf("公斤:");
	scanf("%d",&x);
	printf("磅:%.1f",x*2.2);
	
	return 0;
} 
