//試寫一程式由使用者輸入立方體的長 寬 高,在計算其體積(體積=長*寬*高) 
#include <stdio.h>

int main(void){
	int x,y,z;
	
	printf("長:");
	scanf("%d",&x);
	printf("寬:");
	scanf("%d",&y);
	printf("高:");
	scanf("%d",&z);
	printf("體積:%d",x*y*z);
	
	return 0;
} 
