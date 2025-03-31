#include <stdio.h>
int main()
{
	int n,a[10];
	printf("请输入你将要输入的整数个数n，其中n属于1~10:");
	scanf("%d",&n);
	if(n>10 || n<=0)
	{ 
		printf("输入错误：");
		exit(0);
	}
	int i;
	printf("请输入%d个整数：",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);//012334
	} 
	int j,k,t;
	for(i=1;i<n;i++)
	{
		for(j=0;j<n-i;j++)
		{
			if(a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
		if(a[0]==0) k=1;
		else k=0;
		printf("最小数为：");
		for(i=k;i<n;i++)
			{
				printf("%d",a[i]);
			}
			printf("\n"); 			
	for(i=1;i<n;i++)
	{
		for(j=0;j<n-i;j++)
		{
			if(a[j]<a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	printf("最大数为："); 
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
	return 0;	
} 
