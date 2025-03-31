#include <stdio.h>
int main(){
	int i,j;
	for (i=1;i<200;i++){
		for(j=1;j<=i;j++){
			 if(j*j==i)
			 	printf("%d ",i);
		}
	}
	return 0;
}
