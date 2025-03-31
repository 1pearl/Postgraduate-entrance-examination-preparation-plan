#include <stdio.h>
#include <string.h>
int main(){
//	int i,a,b,c;
//	for(i=100;i<1000;i++){
//		a=i/100;
//		b=i%100/10;
//		c=i%10;
//		if (a*a*a+b*b*b+c*c*c==i){
//			printf("%d\n",i);
//		}
//	} 
//	
//	char a;
//	scanf("%c",&a);
//	if(a<91){
//		a+=32;
//		printf("对应的小写字母为%c：\n",a);
//	}
//	else{
//		a-=32;
//		printf("对应的大写字母为%c：\n",a);
//	}  

//				完数 （一个数恰好等于他的因子之和 eg：6=1+2+3）
	
	
	char c;
	
	char string[80];
	int word,i,num=0;
	gets(string);
	for(i=0;(c=string[i])!='\0';i++){
		if(c==' ') word=0;
		else if(word==0){
			num++;
			word=1;
		}
		
	}
	printf("%d\n",num);	
} 
