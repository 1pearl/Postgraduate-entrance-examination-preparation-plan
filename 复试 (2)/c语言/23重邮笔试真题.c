#include <stdio.h>
int main()
{
	int n,a[10];
	printf("�������㽫Ҫ�������������n������n����1~10:");
	scanf("%d",&n);
	if(n>10 || n<=0)
	{ 
		printf("�������");
		exit(0);
	}
	int i;
	printf("������%d��������",n);
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
		printf("��С��Ϊ��");
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
	printf("�����Ϊ��"); 
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
	return 0;	
} 
