#include <stdio.h>
#include <string.h>
int main ()
{
	char c;
	char data[100];
	int flag=0; //flagΪ0��ʾǰ����ǿո�Ϊ1��ʾǰ�治�ǿո�
	int i,cnt=0;
	gets(data);
	for(i=0;(c=data[i])!='\0';i++)
	{
		if(c==' ') flag=0;
		else if(flag==0)
		{
			flag=1;
			cnt++;
			
		}
	}
	printf("������Ϊ��%d\n",cnt);
//		char string[100];
//		int i,num=0,word=0;
//		char c;
//		gets(string);
//		for(i=0;(c=string[i])!='\0';i++)
//		{
//			if(c==' ') word=0;
//			else if(word==0) {
//				word=1;
//				num++;
//			}
//		}
//		printf("������Ϊ��%d\n",num);
	return 0;
}
