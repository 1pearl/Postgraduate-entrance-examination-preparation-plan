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
	printf("字母有%d个，空格有%d个，数字有%d个，其他有%d个\n",letters,space,digit,orther);
	printf("有%d个字母\n",letters);

		return 0;
	}
