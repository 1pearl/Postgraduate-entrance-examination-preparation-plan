//#include <stdio.h>
//#include <stdlib.h>
//int Accmulator(int array[],int num,int res1){
//    int i;
//	for(i=0;i<num;i++)
//	res1+=array[i];
//	return res1;
//}
//
//int Multiplicator(int array[],int num,int res2){
//	int i;
//	for(i=0;i<num;i++)
//	res2*=array[i];
//	return res2;
//}
//
//int main(){
//	int *array;
//	int res1=0,res2=1;
//	int i;
//	int num;
//	printf("Please enter parameters��\r\n");
//	scanf("%d",&num);
// 	array = malloc
// 
//	for(i=0;i<num;i++) {
//		scanf("%d",array+i);
//	}
//	printf("res1 = %d\r\n",Accmulator(array,num,res1));
//	printf("res2 = %d\r\n",Multiplicator(array,num,res2));
//
//    
//	return 0;
//}


#include <stdio.h>
#include <stdlib.h>

//void swap(int *x,int *y){
//	int t = *x;
//	*x = *y;
//	*y = t;
//}
//
//int main() {
//	int a = 1; int b = 2;
//	swap(&a,&b);//���Ҫ����ʵ�ε�ֵ�� ����Ҫ����ַ 
//	printf("a = %d, b = %d\n",a,b); 
//	
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//void mystrcpy(char*dest,const char*src) {
//	while((*dest++ = *src++)!= '\0');
//}
//
//int main() {
//    char s1[32] = "hello";
//    char s2[32] = "123456789";
//    
//    mystrcpy(s2,s1);
//    
//    printf("%s\n",s2);
//	 
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>

//int main() {
//    int *p;
//	// *p = 100; ����ԭ��:*pָ����ڴ�Ϊ����ڴ棬���ֱ��ʹ�ã���Ϊ�Ƿ�������ڴ�������ڱ���������ʹ�ã�
//	
//	int *p = NULL; //��ˣ�һ�㽫*pָ����ڴ�����ΪNULL�������Ͳ�����ָ�������ڴ�
//	//*p = 100; ��Ȼ��Ȼ������ʹ��ֱ�Ӹ�ֵ��
//	
//	//����һ��ϵͳ�����ڴ�
//	int a; 
//	int *p1 = &a;
//	
//	//���������û������ڴ棨���ڴ棩
//	char *str = (char*)malloc(32);//����32����,8�ֽ� 
//	//char *str = (char*)malloc(sizeof(char*));
//	
//	free(str);
//	str = NULL;//��Ϊstr��ָ��ĵ�ַ�ռ��ѱ��ͷţ����Ӧ�ð�ԭ��strָ��ĵ�ַ��գ�	 
//	return 0;
//}
//
//#include <stdio.h>
//#include <stdlib.h>
//
//void delete_space(char* s){
//	while(*s != '\0'){
//		*s = *(s+1);
//		s++;
//	}
//}
//
//int main() {
////	//����һ : %[^/n] 
////	char * str = (char*)malloc(128);//����һ��ָ��
////	scanf("%[^\n]",str);
////	printf("%s\n",str);
////	//��������gets();
////	char str1[10] = "/0";
////	gets(str1);
////	printf("%s\n",str1);  
//	//��������getchar();
//	
////	char str3[10] = "/0"; 
//	char * str3 = (char*)malloc(128);//����һ��ָ��
//	char ch;
//	int i;
//	while((ch = getchar())!= '\n'){
//		*(str3 + i++ ) = ch; 
//	} 
////	printf("%s\n",str3);
//	char *begin = str3;
//	while(*str3 != '\0'){
//		if(*str3 == ' '){
//			delete_space(str3);
//		} else {
//			str3++;
//		}
//	}
//	printf("%s\r\n",begin);
//	//printf("%s\r\n",*begin);
//	return 0;
//} 

#include <stdlib.h> 
#include <stdio.h>

int main() {
//    char a[32] = "helloworld";
//	char *p = "helloworld"; 
//
//    a++;//�ᱨ����Ϊa��ջ�ռ��н���ָ��a���ַ�����Ԫ�أ�+1�൱�뽫����ַ�������ƽ��4���ֽ�(1��λ��),��Ȼ����4���ֽ�Ϊ�Ƿ��� 
//    p++;//���ᱨ����ȡ����e�� 
    int num;
	
	const int *p1 = &num; //const ���� *p1,Ҳ��Ϊnum 
	//(*p1)++; num++;   ��Ϊ�Ƿ� 
	p1++;//��Ȼ��Ұָ�룬�����Ա���ͨ�� 
	return 0;
}
























