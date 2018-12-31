/*刚糶祘Α块挡狦ユ传玡a=10,b=20,c=30;ユ传a=30,b=10,c=20*/

#include <stdio.h>

int main(void){
	int a = 10,b = 20,c = 30;
	int tmp1,tmp2;
	
	printf("ユ传玡%d %d %d\n",a,b,c);
	
	tmp1 = a;       //tmp1=10 tmp2=?  a=10 b=20 c=30 
	a = c;          //tmp1=10 tmp2=?  a=30 b=20 c=30
	tmp2 = b;       //tmp1=10 tmp2=20 a=30 b=20 c=30
	b = tmp1;       //tmp1=10 tmp2=20 a=30 b=10 c=30
	c = tmp2;       //tmp1=10 tmp2=20 a=30 b=10 c=20
	
	
	printf("ユ传%d %d %d",a,b,c);
	
	return 0;
} 
