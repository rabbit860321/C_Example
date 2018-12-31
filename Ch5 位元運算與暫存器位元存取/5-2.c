//呈上題,除了& |運算,也輸出兩個數字&& ||運算的結果,並比對&和&&,以及|和||的結果是否相同 
#include<stdio.h>

int main(void){
	int num1,num2;
	
	scanf("%d",&num1);
	scanf("%d",&num2);
	
	printf("%d & %d = %d\n",num1,num2,num1&num2);
	printf("%d && %d = %d\n",num1,num2,num1&&num2);
	
	printf("%d | %d = %d\n",num1,num2,num1|num2);
	printf("%d || %d = %d",num1,num2,num1&&num2);
} 
