#include <stdio.h>
#include <stdlib.h>

//  1    1    2    3    5    8    13
//num1 num2  res
//     num2  num1 res
int main(){
	int num1 = 1,num2 = 1;
	int i,n,temp,res;
	printf("��Ҫ��쳲���������ǰ����ĺ�?\n");
	scanf("%d",&n);
	if(n <= 0){
		printf("error!");
		return;
	}
	if(n ==  1 || n ==2){
		printf("res = 1\n");
	} else {
	 for(i=2;i<n;i++){
		res = num1 + num2;
		num2 = num1;//˳���ܴ� 
		num1 = res;
	}
	printf("res = %d\n",res);		
	}

	return 0;
} 
