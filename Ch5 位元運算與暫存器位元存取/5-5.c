//請寫一個程式,利用位元運算來計算4位元數值(0~15)的同位檢查位元值 
#include <stdio.h>
#define bit0 0x01  //0001
#define bit1 0x02  //0010
#define bit2 0x04  //0100
#define bit3 0x08  //1000
int main(void){
	unsigned char PORTA = 0x00;
	int i;
	
	printf("Enter a num(0~15):");
	scanf("%d",&PORTA);
	
	if(((PORTA & bit0) == bit0) == 1){
		i +=1;
	}
	if(((PORTA & bit1) == bit1) == 1){
		i +=1;
	}
	if(((PORTA & bit2) == bit2) == 1){
		i +=1;
	}
	if(((PORTA & bit3) == bit3) == 1){
		i +=1;
	}
	
	if(i == 2 | i == 4){
		printf("Parity Check:0");
	}else{
		printf("Parity Check:1");
	}

	
	return 0;
}
