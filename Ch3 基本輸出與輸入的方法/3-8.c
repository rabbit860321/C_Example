/*試寫一程式,從鍵盤輸入整數值後,轉成八進位與十六位進位從螢幕輸出*/ 
#include <stdio.h>

int main(void){
	int num;
	
	printf("num:");
	scanf("%d",&num);
	printf("八進位:%o\n",num);
	printf("十六進位:%x",num);
	
	return 0;
} 
