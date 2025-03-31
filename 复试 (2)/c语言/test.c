#include <stdio.h>
#include <stdlib.h> // abs() 需要包含 stdlib.h

int main() {
    int hour1, minute1, hour2, minute2;
    
    // 提示用户输入
    printf("请输入第一个时间（小时 分钟）：");
    scanf("%d %d", &hour1, &minute1);
    
    printf("请输入第二个时间（小时 分钟）：");
    scanf("%d %d", &hour2, &minute2);

    // 计算两个时间对应的分钟数
    int t1 = hour1 * 60 + minute1;
    int t2 = hour2 * 60 + minute2;

    // 计算时间差（取绝对值）
    int diff = abs(t1 - t2);

    // 输出时间差
    printf("时间差是 %d 小时 %d 分钟。\n", diff / 60, diff % 60);

// 2、//BubbleSort 
	
//		int data[5]={7,8,5,6,3};
//		int i,j,k;
//		for (i=1;i<=4;i++){                               //控制轮数 
//			for (j=0;j<=4-i;j++){                       //控制比较次数 
//				if(data[j+1]<data[j]){
//					int temp  =data[j];
//					data[j]   =data[j+1];
//					data[j+1] =temp;
//				}
//				
//			}
//		}
//		
//		for( k = 0; k <= 4; k++  )
//		{
//			printf( "%d", data[k] );
//		}





//	3、//SelectionSort 
		
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

//	//4、数随机输入数字的位数 
		
//		int c;
//		int n=0;
//		scanf("%d",&c);
////			n++;
////			c/=10;
//		while(c>0){
//			n++;
//			c/=10;
//		}
//		printf("%d\n",n);


 //5 整数分解
// 	
//	 int x;
//	 scanf("%d",&x);
//	 int t=x;
//	 int mask=1;
//	 while(t>9){
//	 	t/=10;
//	 	mask*=10;
//	 }
////	 t=1234 mask=1
////	 t=123 mask=10
////	 t=12 mask=100
////	 t=1 mask=1000
////	 t=0 mask=10000
//
//	 
//	 do{
//	 	int d=x/mask;
//	 	printf("%d",d);
//	 	if (mask>9){
//	 		printf(" ");
//		 }
//		 x%=mask;
//		 mask/=10;
//	 }
//	 while(mask>0);
//	 
	 
	 
//	 //6 九九乘法表
//	 int i,j;
//	 for(i=1;i<10;i++){
//	 	for(j=1;j<=i;j++){
//			printf("%d*%d=%-2d\t", j, i, i * j);  // %-2d 让数字左对齐
//		 }
//		 printf("\n");
//	 } 
	 
	 
	 //7 大小写转换
//	char c;
//	scanf("%c",&c);
//	if(c<='z'&& c>='a')
//		printf("%c对应的大写字母为%c\n",c,c-32);
//	else if(c<='Z'&& c>='A')
//		printf("%c对应的小写字母为%c\n",c,c+32);
//	else printf("input error:");
	 
	//8 整数逆序输出 

	  
// int x;
// scanf("%d",&x);
// while(x){
// 	printf("%d",x%10);
// 	x/=10;
// } 
 
// int d,r=0;
// while(x>0){
// 	d=x%10;
// 	printf("%d",d);
//// 	r=r*10+d;
// 	x/=10;
//  
// printf("%d\n",r);












	return 0;
}   
