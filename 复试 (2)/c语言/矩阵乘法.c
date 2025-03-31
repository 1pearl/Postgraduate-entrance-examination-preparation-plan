#include <stdio.h>
int main(){
	int i,j,k;
	int matrix1[2][3],matrix2[3][2],result[2][2];
	printf("请为第一个矩阵赋值：");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",matrix1[i][j]);
		}
	}
	printf("请为第二个矩阵赋值：");
		for(i=0;i<3;i++)
		{
		for(j=0;j<2;j++)
		{
			scanf("%d",matrix2[i][j]);
		}
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{	int temp=0;
			for(k=0;k<3;k++)
			{
				temp+=matrix1[i][k]*matrix2[k][j];
			}
			result[i][j]=temp;
		}
	} 
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d",result[i][j]);
		}
	}
	return 0;
}
