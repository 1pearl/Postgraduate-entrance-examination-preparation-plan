//#include <stdio.h>
//#include <stdlib.h>  // ������ͷ�ļ���ʹ�� malloc ����
//
//struct comp {
//    float re;  // ʵ��
//    float im;  // �鲿
//};
//
//// �����������������������Ĳ���ؽ��
//struct comp* m(struct comp *x, struct comp *y);
//
//int main() {
//    struct comp *t;      // �����洢�����ָ��
//    struct comp a, b;    // �����洢�������������
//    a.re = 1;            // ��һ��������ʵ��
//    a.im = 2;            // ��һ���������鲿
//    b.re = 3;            // �ڶ���������ʵ��
//    b.im = 4;            // �ڶ����������鲿
//
//    // ���ú��� m�������ݸ��� a �� b ��ָ��
//    t = m(&a, &b);       // �� �� a �� b �ĵ�ַ���ݸ� m ����
//
//    // ��ӡ���
//    printf("t->re = %f, t->im = %f\n", t->re, t->im);
//    return 0;
//}
//
//struct comp* m(struct comp *x, struct comp *y) {
//    struct comp *z;  // �����洢�����ָ��
//
//    // ��̬�����ڴ�� z
//    z = (struct comp *)malloc(sizeof(struct comp));  // �� ��̬�����ڴ�
//
//    // ���㸴����
//    z->re = x->re - y->re;   // ʵ�����
//    z->im = x->im - y->im;   // �鲿���
//
//    return z;  // ���ش洢�����ָ��
//}

//#include <stdio.h>
//
//int main() {
//    float hs, ss;  // hs = �����¶�, ss = �����¶�
//
//    printf("Please input a float number: ");
//    scanf("%f", &hs);  // ���뻪���¶�
//
//    ss = (float)5/9*(hs-32);  // ���ݹ�ʽ���������¶�
//    // = (5.0/9.0) * (hs - 32);
//    
//    printf("C = %.2f\n", ss);  // ��������������λС��
//    return 0;
//}

#include <stdio.h>
#include <math.h>

int main() {
    float a, xn, xn1;
    printf("Input a=");
    scanf("%f", &a);
    
    // ��ʼֵ���趨 xn Ϊ a/2
    xn = a / 2;
    
    // ���ݹ�ʽ�����ʼ�� xn1
    xn1 = (xn + a / xn) / 2;
    
    // ������ֱ��ǰ�����μ���Ĳ�С�� 10^-5
    do {
        xn = xn1;  // ���� xn
        xn1 = (xn + a / xn) / 2;  // �����µ� xn1
    } while (fabs(xn1 - xn) >= 1e-5);  // ������ν������ڵ��� 10^-5����������
    
    // ���������
    printf("xn1 = %f\n", xn1);
    return 0;
}



