 #include <stdio.h>
int main(){
	int i;
	int x;
	int cnt=0;
	int sum=0;
	for(x=2;x<100;x++)
	{

		int isPrime=1;
		for(i=2;i*i<=x;i++){        //i*i<=x<-->i<=sqrt��x��  //i*i�������ޣ�ֻ��Ҫ�ж�<=����x 
			if (x%i==0){                 //�жϳ�1�⣬�������������� 
				isPrime=0;
				break; }
			}
		if(isPrime==1)
		{
			cnt++;
			printf("%d��",x);
			sum+=x;
		}
	
	}
	printf("һ����%d��������������Ϊ%d\n",cnt,sum);


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
//		printf("������һ����������");
//		scanf("%d",&x);
//		if (isprime(x)) printf("%d������\n",x);
//		else printf("%d��������\n",x);
//	}
//	
//	
	
	
	
	
	
}
