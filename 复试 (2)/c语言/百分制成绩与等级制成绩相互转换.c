#include <stdio.h>
int main(){
	int n;
	char c;
	float a;
	printf("百分制成绩请按'1',等级制成绩请按'2'：");
	scanf("%d",&n);
	char p=getchar(); //用于接收回车 如果没有这一行当输入2时，c将接受'\n' 导致错误。 
	if(n==1)
	{
		printf("请输入成绩：");
		scanf("%f",&a);
		if(a>=85) printf("A");
		else if(a>=70&&a<85) printf("B");
		else if(a>=60&&a<70) printf("C");
		else printf("D"); 
	}
	else if(n==2)
	{	
		printf("请输入等级：");
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
			printf("输入错误：");break;
		}
	}

	
	return 0;
}
