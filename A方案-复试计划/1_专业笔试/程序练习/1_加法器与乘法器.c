#include <stdio.h> 
#include <stdlib.h>

int main(){
	printf("������Ҫ�ۼӻ��۳˵����ָ���\n");
	int i,j,res1=0,res2=1;
	int *p;
	scanf("%d",&j);
	p = (int*)malloc((sizeof(int)*j));
	printf("��������Ҫ�ۼƼ�������֣�\n");
	for(i=0;i<j;i++){
		scanf("%d",p+i);
	}
	for(i=0;i<j;i++) {
		res1 += *(p+i);
		res2 *= *(p+i);
	}
	printf("�ۼӵĽ��Ϊ:%d\n",res1);
	printf("�۳˵Ľ��Ϊ:%d\n",res2); 
	
	free(p);
	p = NULL;
	return 0;
}

//int main() {
//	int a,b;
//	scanf("%d%d",&a,&b);
//	printf("֮�ͣ�%d\n",a+b);
//	printf("֮����%d\n",a*b);
//	return 0;
//} 
















