#include <stdio.h>
int main(){
	char c;
	int letters=0,space=0,digit=0,orther=0;
	while((c=getchar())!='\n'){
		if((c>='a'&&c<='z')||(c>='A'&&c<='Z')){
			letters++;
		}
	else if(c==' '){
			space++;
		}
		else if(c<='9'&&c>='0'){
			digit++;
		}
		else orther++;
		}
	printf("��ĸ��%d�����ո���%d����������%d����������%d��\n",letters,space,digit,orther);
	printf("��%d����ĸ\n",letters);

		return 0;
	}
