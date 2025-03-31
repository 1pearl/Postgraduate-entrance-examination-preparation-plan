 #include <stdio.h>
int main(){
	int i;
	int x;
	int cnt=0;
	int sum=0;
	for(x=2;x<100;x++)
	{

		int isPrime=1;
		for(i=2;i*i<=x;i++){        //i*i<=x<-->i<=sqrt（x）  //i*i控制上限，只需要判断<=根号x 
			if (x%i==0){                 //判断除1外，还有无其他因子 
				isPrime=0;
				break; }
			}
		if(isPrime==1)
		{
			cnt++;
			printf("%d，",x);
			sum+=x;
		}
	
	}
	printf("一共有%d个素数，素数和为%d\n",cnt,sum);


//	int isprime(int n){
//		int i;
//		if(n<2) {
//		return 0 ;}
//		for(i=2;i*i<n;i++){
//			if(n%i==0){
//				return 0;
//				break;		
//			}
//		
//		}
//		return 1;
//		
//	}
//	int main()
//	{
//		int x;
//		printf("请输入一个正整数：");
//		scanf("%d",&x);
//		if (isprime(x)) printf("%d是素数\n",x);
//		else printf("%d不是素数\n",x);
//	}
//	
//	
	
	
	
	
	
}
