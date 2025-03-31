#include <stdio.h>
int main(){
	int max,min,a[10];
	printf("请输入10个数用空格隔开:");
	int i,j,k;
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	max=a[0];
	min=a[0];
	for(j=1;j<10;j++)
	{
		if(a[j]>max)
		{
			int t=max;
			max=a[j];
			a[j]=t;
		}
		else if(a[j]<min)
		{
			int t=min;
			min=a[j];
			a[j]=t;
		}
	}	
	
		printf("max=%d\nmin=%d\n",max,min);	
	
	
	return 0;
}
