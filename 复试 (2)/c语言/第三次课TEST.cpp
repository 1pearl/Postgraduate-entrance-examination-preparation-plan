#include <stdio.h>
int main(){
//	int arr[5]={5,3,8,6,2};
//	int i,j;
//	int temp;
//	for (i=1;i<=4;i++){ //��������
//		for (j=0;j<5-i;j++) { //����ÿһ�ֵıȽϴ��� 
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
printf("���漴����һ����ĸ��");
scanf("%c",&n);
if('a'<=n && n<='z'){
	printf("%c��Ӧ�Ĵ�д��ĸΪ%c\n",n,n-32);
}
else if ('A'<=n && n<='Z'){
	printf("%c��Ӧ��Сд��ĸΪ%c\n",n,n+32);
}
else
	printf("�������\n");



	
	return 0;
}
