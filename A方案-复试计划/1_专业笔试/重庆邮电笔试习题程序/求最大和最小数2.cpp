#include"stdio.h"

int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	printf("max=%d",a>b?a:b);
	putchar(10);
   	printf("min=%d",!(a>b)?a:b);
   	return 0;
}

