#include <stdio.h>
#include <stdlib.h>

//��Ƶ����:https://www.bilibili.com/video/BV1Fw411X7fp/?spm_id_from=333.337.search-card.all.click&vd_source=4d8bdaa129d34a4905c8db625c08e44d 
// 49/35 = 1...14
// 35/14 = 2...7
// 14/7  = 2...0 
//������� * ��С������ = �����˻� 

int main(){
	int num1,num2,temp,cal,rem;
	printf("��������������\n");
	scanf("%d%d",&num1,&num2);
	if(num1 > num2){
		temp = num1;
		num1 = num2;
		num2 = temp;
	}
	cal = num1*num2;
	while(num2 != 0) {
		rem = num1%num2;
		num1 = num2;
		num2 = rem;
	}
	printf("���������%d,��С��������%d",num1,cal/num1); 
	return 0;
} 
