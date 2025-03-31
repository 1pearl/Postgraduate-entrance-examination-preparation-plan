#include <stdio.h>
int main()
{
	char c[10];
	int i,n;
	printf("请输入字符个数：");
	scanf("%d",&n);
	if (n<1||n>10) printf("ERROR");
	printf("请输入字符："); 
	getchar();//接收'\n' 
	for (i=0;i<n;i++)
	{
		scanf("%c",&c[i]);
	}
	for (i=0;i<n;i++)
	{
		c[i]+=4;
		printf("%c",c[i]);
	}
	return 0;
}
