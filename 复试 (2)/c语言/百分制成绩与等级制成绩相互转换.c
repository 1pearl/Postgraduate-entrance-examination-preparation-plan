#include <stdio.h>
int main(){
	int n;
	char c;
	float a;
	printf("�ٷ��Ƴɼ��밴'1',�ȼ��Ƴɼ��밴'2'��");
	scanf("%d",&n);
	char p=getchar(); //���ڽ��ջس� ���û����һ�е�����2ʱ��c������'\n' ���´��� 
	if(n==1)
	{
		printf("������ɼ���");
		scanf("%f",&a);
		if(a>=85) printf("A");
		else if(a>=70&&a<85) printf("B");
		else if(a>=60&&a<70) printf("C");
		else printf("D"); 
	}
	else if(n==2)
	{	
		printf("������ȼ���");
		scanf("%c",&c);
		printf("Your score:");
		switch(c)
		{
			case 'A':
				printf("85~100");break;
			case 'B':
				printf("70~84");break;
			case 'C':
				printf("60~69");break;
			case 'D':
				printf("0~59");break;
			default:
			printf("�������");break;
		}
	}

	
	return 0;
}
