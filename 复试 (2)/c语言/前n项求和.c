#include <stdio.h>
int main(){
	int n;
	int i;
	double sum=0.0;
	int sign=1;
	printf("ÇëÊäÈënµÄÖµ£º");
	scanf("%d",&n);
	for (i=1;i<=n;i++){
		//sum+=1.0/i; //  1/1+1/2+1/3+...+1/n 
//		  sum+=sign*1.0/i;
//		  sign=-sign;              1/1-1/2+1/3-1/4+...-... 
	}
	printf("%f\n",sum);
	
	
	return 0;
}
