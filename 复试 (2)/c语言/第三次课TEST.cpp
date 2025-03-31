#include <stdio.h>
int main(){
//	int arr[5]={5,3,8,6,2};
//	int i,j;
//	int temp;
//	for (i=1;i<=4;i++){ //控制轮数
//		for (j=0;j<5-i;j++) { //控制每一轮的比较次数 
//			if(arr[j]>arr[j+1]){
//				temp=arr[j];
//				arr[j]=arr[j+1];
//				arr[j+1]=temp;
//			}
//		}		
//	}
//	int k;
//	for(k=0;k<5;k++){
//		printf("%d\n",arr[k]);
//	}
//		int data[5]={7,8,5,6,3};
//		int i,j,k;
//		for (i=0;i<4;i++){
//			for (j=i+1;j<5;j++){
//				if (data[i]>data[j]){
//					int temp=data[i];
//					data[i]=data[j];
//					data[j]=temp;
//					
//				}
//				
//			}				
//		} 
//		for( k = 0; k <= 4; k++  )
//		{
//			printf( "%d", data[k] );
//		
//		}

char n;
printf("请随即输入一个字母：");
scanf("%c",&n);
if('a'<=n && n<='z'){
	printf("%c对应的大写字母为%c\n",n,n-32);
}
else if ('A'<=n && n<='Z'){
	printf("%c对应的小写字母为%c\n",n,n+32);
}
else
	printf("输入错误\n");



	
	return 0;
}
