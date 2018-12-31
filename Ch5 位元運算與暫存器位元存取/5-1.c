//試寫一個程式要求使用者輸入兩個數字,接著輸出兩個數字位元& | 運算的結果
#include<stdio.h>

int main(void){
	int num1,num2;
	
	scanf("%d",&num1);
	scanf("%d",&num2);
	printf("%d & %d = %d\n",num1,num2,num1&num2);
	printf("%d | %d = %d",num1,num2,num1|num2);
} 
