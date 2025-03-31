#include <stdio.h>
int main()
{
	int i,j;
	for(i=1;i<1000;i++)
	{
		int t=0;
		for(j=1;j<=i/2;j++)
		{
			if(i%j==0)
			{
				t+=j;
			}
		}
		if(i==t) printf("%d ",i);
	}
	return 0;
}



