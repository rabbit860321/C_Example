/*試寫一程式輸入兩個整數,從螢幕輸出其和、差、積*/
#include <stdio.h>

int main(void){
	int x,y;
	
	printf("1:");
	scanf("%d",&x);
	printf("2:");
	scanf("%d",&y);
	
	printf("和:%d\n差:%d\n積:%d",x+y,x-y,x*y);
	return 0;
} 
