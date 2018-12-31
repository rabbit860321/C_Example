/*試寫一程式,從鍵盤輸入一字元後,不用按Enter鍵,而且該字元輸入時不顯示在螢幕上,程式會另外自行輸出字元*/ 
#include <stdio.h>
#include <conio.h>

int main(void){
	printf("a char:");
	char ch = getch();
	printf("\n%c",ch);
	
	return 0;
}
