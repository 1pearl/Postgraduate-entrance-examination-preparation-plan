#include <stdio.h>
#include <stdlib.h>

int main(){
	printf("������Ҫ�жϵ��ַ���\n");
	char c;
	scanf("%c",&c);
	if(c>='0'&&c<='9'){
		printf("����\n"); 
	} else if(c>='a'&&c<='z') {
		printf("Сд��ĸ\n");
	} else if(c>='A'&&c<='Z') {
		printf("��д��ĸ\n");
	} else {
		printf("����\n");
	}
	return 0;
} 
