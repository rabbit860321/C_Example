/*試寫一程式,利用ASCII碼,將小寫字母z,轉換成大寫字母Z,然後從螢幕輸出*/ 
#include <stdio.h>

int main(void){
	char z = 'z';
	
	printf("%c",z-32);
	
	return 0;
}
