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
//	printf("Please enter parameters！\r\n");
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
//	swap(&a,&b);//如果要交换实参的值， 必须要传地址 
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
//	// *p = 100; 错误原因:*p指向的内存为随机内存，如果直接使用，视为非法，这段内存可能正在被其他程序使用！
//	
//	int *p = NULL; //因此，一般将*p指向的内存设置为NULL，这样就不会乱指向其他内存
//	//*p = 100; 当然仍然不可以使用直接赋值！
//	
//	//方案一：系统分配内存
//	int a; 
//	int *p1 = &a;
//	
//	//方案二：用户申请内存（堆内存）
//	char *str = (char*)malloc(32);//申请32比特,8字节 
//	//char *str = (char*)malloc(sizeof(char*));
//	
//	free(str);
//	str = NULL;//因为str所指向的地址空间已被释放，因此应该把原来str指向的地址清空！	 
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
////	//方案一 : %[^/n] 
////	char * str = (char*)malloc(128);//声明一个指针
////	scanf("%[^\n]",str);
////	printf("%s\n",str);
////	//方案二：gets();
////	char str1[10] = "/0";
////	gets(str1);
////	printf("%s\n",str1);  
//	//方案三：getchar();
//	
////	char str3[10] = "/0"; 
//	char * str3 = (char*)malloc(128);//声明一个指针
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
//    a++;//会报错，因为a在栈空间中仅仅指向a的字符串首元素，+1相当与将这个字符串整体平移4个字节(1个位置),显然后续4个字节为非法区 
//    p++;//不会报错，会取出‘e’ 
    int num;
	
	const int *p1 = &num; //const 修饰 *p1,也即为num 
	//(*p1)++; num++;   即为非法 
	p1++;//虽然是野指针，但可以编译通过 
	return 0;
}
























