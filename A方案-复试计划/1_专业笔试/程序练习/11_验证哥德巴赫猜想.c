#include <stdio.h>
#include <stdlib.h>
#include <math.h>
// �κ�һ������2��ż�����ܱ�ʾΪ��������֮�͡�����24=5+19������5��19����������
int isOOD(int n) {//�ж��ǲ������� 
	int i;
	for(i=2;i<=sqrt(n);i++)
	if(n%i==0) break;//ѭ������������û�б�num1С��������num1,˵��num1������ 
	if(i > sqrt(n)) return 1;
	return 0;
}

int main(){
	int n,i,num1,num2;
	scanf("%d",&n);
    for(num1=2;num1<n;num1++){
    	for(i=2;i<=sqrt(num1);i++)
    	if(num1 % i == 0) break;	
		//ѭ������������û�б�num1С��������num1,˵��num1������ 
		if(i > sqrt(num1)){//˵��num1������ 
			//printf("num1 = %d������\n",num1);
			num2 = n - num1;
		    	for(i=2;i<=sqrt(num2);i++)
		    		if(num2 % i==0) break;
				if(i>sqrt(num2)){
				  printf("num2 = %d������\n",num2);
				  printf("%d + %d = %d\n",num1,num2,n);
				  break;	
		         }
		}
	}
//    for(i=2;i<n;i++){
//    	if(isOOD(i)){
//    		num1=i;
//    		num2=n-num1;
//    		if(isOOD(num2)){
//    			printf("%d + %d = %d\n",num1,num2,n); break;
//			}
//		}
//	}
	return 0;
} 
