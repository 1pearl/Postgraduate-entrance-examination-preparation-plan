#include <stdio.h>
#include <stdlib.h>

int main(){
	int i,j,max,min;
	int *p;
	printf("��������Ҫ�������ֵĸ���\n");
	scanf("%d",&j);
	p = (int*)malloc(sizeof(int)*j);
	printf("������%d����\n",j);
	for(i=0;i<j;i++) {
		scanf("%d",p+i);
	}
	max = min = *p; 
	for(i=1;i<j;i++){
		if(max < *(p+i)) {
		   max = *(p+i);	
		}
		if(min > *(p+i)) {
		   min = *(p+i);	
		}
	} 
	printf("���ֵ��%d,��Сֵ��%d",max,min);
	free(p);
	p = NULL;
	return 0;
} 


















