#include <stdio.h>
// 法一：辗转相除法 
int main() {
	int a_1,b_1,a,b,c,d;
	printf("请输入两个整数：");
	scanf("%d %d",&a,&b);
	a_1=a;
	b_1=b;

	while(b>0)
	{
		int temp=a%b;
		a=b;
		b=temp;
	}
}
	printf("最大公约数是：%d\n",a);
	d=(a_1*b_1)/a; //两个数的乘积等于这两个数的最大公约数与最小公倍数的乘积。
	printf("最小公倍数是：%d\n",d);


//法二：枚举
//		int main(){
//		
//		int a,b,min;
//		scanf("%d %d",&a,&b);
//		if (a<b){
//			min=a;
//		} 
//		else {
//			min=b;
//		}
//		int i,t;
//		for (i=2;i<=min;i++){
//			if(a%i==0 && b%i==0){
//				t=i;	
//			}
//		}
//		int c=a*b/t; 
//		printf("最大公约数是%d，最小公倍数是%d\n",t,c);
////
//
//
//
// 
//		
	return 0; 
}

 

