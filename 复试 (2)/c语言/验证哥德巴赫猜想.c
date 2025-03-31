#include <stdio.h>
int main(){
	int num,x,i,j,firstnum,secondnum;
	printf("请随机输入一个大于2的整数：");
	scanf("%d",&num);
	if(num<=2)  printf("error："); 	
	for(x=2;x<num/2;x++)  //num/2 防止重复输出    
	{
		firstnum=x;
		for(i=2;i*i<=firstnum;i++)
		{ 
			if(firstnum%i==0)
			{
				firstnum=0;
				break;
			}
		}
		secondnum=num-x;
		for(j=2;j*j<=secondnum;j++)
		{
			if(secondnum%j==0)
			{
				secondnum=0;
				break;
			}
		}
		if(firstnum && secondnum ) 	printf("%d=%d+%d\n",num,firstnum,secondnum); 
	}
//	printf("%d=%d+%d ",num,firstnum,secondnum);
	
	
	return 0;
}
