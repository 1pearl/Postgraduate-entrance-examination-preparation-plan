#include <stdio.h>
int main(){
	int i,j;
	int cnt=0;
	for(i=1;i<1000;i++){
		for(j=1;j<=i;j++){
			if(j*j==i){
				printf("%d*%d=%d ",j,j,i);
				cnt++;
				if(cnt==6){
					printf("\n"); //û6��Ϊһ����� 
					cnt=0;
				}
			}
		}
	}
	
	return 0;
}
