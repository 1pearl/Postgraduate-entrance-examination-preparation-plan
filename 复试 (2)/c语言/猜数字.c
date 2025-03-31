#include <stdio.h>
#include <stdlib.h>
#include <time.h>
	int main(){
		srand(time(0));
		int number=rand()%100+1;
		int count=0;
		int a=0;
		printf("我已经想好一个1~100之间的数了:\n");
		
		do {
			printf("请猜这个1~100之间的数字:\n"); 
			scanf("%d",&a);
			count++;
				if(a<number) {
					printf("您输入的数太小啦！\n"); 
				}
				else if (a>number){
					printf("您输入的数太大啦！\n");
				}
		}
		while (a!=number);
			printf("太好了，您一共花了%d次猜对了\n",count);
		
		
		
		return 0;
	}
