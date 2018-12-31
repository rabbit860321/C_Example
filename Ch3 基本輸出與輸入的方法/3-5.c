/*試寫一程式解數學函式,f(x,y,z)=3x+2y-z,x、y、z須由鍵盤輸入*/
#include <stdio.h>

int main(void){
	int x,y,z;
	
	printf("x=");
	scanf("%d",&x);
	printf("y=");
	scanf("%d",&y);
	printf("z=");
	scanf("%d",&z);
	
	printf("%d",(3*x)+(2*y)-z);
	
	return 0;
}
