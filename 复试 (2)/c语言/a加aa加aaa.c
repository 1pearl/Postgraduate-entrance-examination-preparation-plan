#include <stdio.h>

int main()
{
    int a, n;
    printf("Please input a and n:"); 
    scanf("%d %d", &a, &n);

    int sum = 0, tn = 0;
    int temp_a = a; // ����ԭʼ a ��ֵ
//    int i;
//    for (i = 0; i < n; i++)
//    {
//        tn = tn * 10 + temp_a; // ���� 2, 22, 222, 2222...
//        sum += tn; // �ۼӵ��ܺ�
//    }
    while(n){
    	sum += temp_a;
    	temp_a = temp_a*10+a;
    	n--;
	}
    printf("a+aa+aaa+...=%d\n", sum);
    return 0;
}

