/*試寫一程式,從鍵盤輸入一字元後,不用按Enter鍵,程式就會輸出該字元*/ 
#include <stdio.h>
#include <conio.h>

int main(void){
	printf("a char:");
	char ch = getche();
	printf("\n%c",ch);
	
	return 0;
}
