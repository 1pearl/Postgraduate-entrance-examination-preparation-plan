#include <stdio.h>
#include <stdlib.h>
/*
���ӵ�һ��ժ�����ɸ����ӣ���������һ�룬����������ֶ����һ����
�ڶ��죬��ʣ�µ����ӵ�һ�룬������񫣬�ֶ����һ����
�Ժ�ÿ�춼��ǰһ��ʣ�µ�һ���һ��������n�����ٳ�ʱ��ֻʣ��һ�������ˡ�
�ʵ�һ�칲ժ�˶��ٸ����ӣ�
Sn = 1;
Sn = 1/2 x Sn-1 - 1;
Sn-1 = 2(Sn-1 + 1); 
*/ 
/*
n,m����n��ʣ��m������ 
*/
int sum_1(int n,int m){
	int sum=m;
	while(n-1){//��1�Ǵӵ�9�쿪ʼ����ƣ���10��ֻ���ṩ��һ����ֵ�����ܵ��� 
		sum = 2*(sum+1);
		n--;
	}
//	int i;
//	for(i=9;i--;i>0){
//		sum = 2*(sum+1); 
//	} 

	return sum;
}

int sum_2(int n){
	if(n == 10){
		return 1;
	}
	return 2*(sum_2(n+1)+1);
}

int main() {
    int n,m;
    scanf("%d%d",&n,&m);
    printf("��1��ժ��%d������\n",sum_2(n));
	return 0;
} 
