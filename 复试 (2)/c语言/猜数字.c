#include <stdio.h>
#include <stdlib.h>
#include <time.h>
	int main(){
		srand(time(0));
		int number=rand()%100+1;
		int count=0;
		int a=0;
		printf("���Ѿ����һ��1~100֮�������:\n");
		
		do {
			printf("������1~100֮�������:\n"); 
			scanf("%d",&a);
			count++;
				if(a<number) {
					printf("���������̫С����\n"); 
				}
				else if (a>number){
					printf("���������̫������\n");
				}
		}
		while (a!=number);
			printf("̫���ˣ���һ������%d�β¶���\n",count);
		
		
		
		return 0;
	}
