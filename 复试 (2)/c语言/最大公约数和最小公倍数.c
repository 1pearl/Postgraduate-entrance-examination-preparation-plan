#include <stdio.h>
// ��һ��շת����� 
int main() {
	int a_1,b_1,a,b,c,d;
	printf("����������������");
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
	printf("���Լ���ǣ�%d\n",a);
	d=(a_1*b_1)/a; //�������ĳ˻������������������Լ������С�������ĳ˻���
	printf("��С�������ǣ�%d\n",d);


//������ö��
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
//		printf("���Լ����%d����С��������%d\n",t,c);
////
//
//
//
// 
//		
	return 0; 
}

 

