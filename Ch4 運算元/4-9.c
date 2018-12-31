//試寫一程式模擬存款機,使用者輸入存入幾枚十元硬幣,五元硬幣和一元硬幣,程式輸出存入總額 
#include <stdio.h>

int main(void){
	int x,y,z;
	
	printf("十元硬幣:");
	scanf("%d",&x);
	printf("五元硬幣:");
	scanf("%d",&y);
	printf("一元硬幣:");
	scanf("%d",&z);
	
	printf("總額:%d元",10*x+5*y+1*z);
	
	
	return 0;
} 
