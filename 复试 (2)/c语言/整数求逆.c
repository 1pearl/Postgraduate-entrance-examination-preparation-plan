#include <stdio.h>

int main(){
	int x;
	int digit=0;
	int result=0;
	printf("请输入一个整数：\n");
	scanf("%d",&x);
	while(x!=0){
		digit=x%10;
		result=result*10+digit;
		x/=10;
}
	printf("%d",result);
	return 0;
}
