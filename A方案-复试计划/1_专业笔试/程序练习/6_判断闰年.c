#include <stdio.h>
#include <stdlib.h>

int main(){
	printf("������Ҫ�жϵ���ݣ�\n");
	int year;
	scanf("%d",&year);
	if((year%4==0&&year%100!=0)||year%400==0){//�������ܱ�4���������ܱ�100��������Ϊ���ꡣ�������ܱ�400������Ҳ�����ꡣ
		printf("Ϊ���꣡\n");
	}else {
		printf("��Ϊ���꣡\n");
	} 
	return 0;
}
