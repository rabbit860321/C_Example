//試寫一個程式要求使用者輸入兩個數字(假設只能輸入0或1),接著輸出兩個數字的AND及OR運算結果 
#include <stdio.h>

int main(void){
	int x,y;
	
	printf("1數:");
	scanf("%d",&x);
	printf("2數:");
	scanf("%d",&y);
	printf("AND:%d\nOR:%d",x && y,x || y);
	
	return 0;
} 
