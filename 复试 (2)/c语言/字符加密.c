#include <stdio.h>
int main()
{
	char c[10];
	int i,n;
	printf("�������ַ�������");
	scanf("%d",&n);
	if (n<1||n>10) printf("ERROR");
	printf("�������ַ���"); 
	getchar();//����'\n' 
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
