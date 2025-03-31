//#include <stdio.h>
//#include <stdlib.h>  // 添加这个头文件来使用 malloc 函数
//
//struct comp {
//    float re;  // 实部
//    float im;  // 虚部
//};
//
//// 函数声明：计算两个复数的差并返回结果
//struct comp* m(struct comp *x, struct comp *y);
//
//int main() {
//    struct comp *t;      // 用来存储结果的指针
//    struct comp a, b;    // 用来存储输入的两个复数
//    a.re = 1;            // 第一个复数的实部
//    a.im = 2;            // 第一个复数的虚部
//    b.re = 3;            // 第二个复数的实部
//    b.im = 4;            // 第二个复数的虚部
//
//    // 调用函数 m，并传递复数 a 和 b 的指针
//    t = m(&a, &b);       // ① 将 a 和 b 的地址传递给 m 函数
//
//    // 打印结果
//    printf("t->re = %f, t->im = %f\n", t->re, t->im);
//    return 0;
//}
//
//struct comp* m(struct comp *x, struct comp *y) {
//    struct comp *z;  // 用来存储结果的指针
//
//    // 动态分配内存给 z
//    z = (struct comp *)malloc(sizeof(struct comp));  // ② 动态分配内存
//
//    // 计算复数差
//    z->re = x->re - y->re;   // 实部相减
//    z->im = x->im - y->im;   // 虚部相减
//
//    return z;  // 返回存储结果的指针
//}

//#include <stdio.h>
//
//int main() {
//    float hs, ss;  // hs = 华氏温度, ss = 摄氏温度
//
//    printf("Please input a float number: ");
//    scanf("%f", &hs);  // 输入华氏温度
//
//    ss = (float)5/9*(hs-32);  // 根据公式计算摄氏温度
//    // = (5.0/9.0) * (hs - 32);
//    
//    printf("C = %.2f\n", ss);  // 输出结果，保留两位小数
//    return 0;
//}

#include <stdio.h>
#include <math.h>

int main() {
    float a, xn, xn1;
    printf("Input a=");
    scanf("%f", &a);
    
    // 初始值，设定 xn 为 a/2
    xn = a / 2;
    
    // 根据公式计算初始的 xn1
    xn1 = (xn + a / xn) / 2;
    
    // 迭代，直到前后两次计算的差小于 10^-5
    do {
        xn = xn1;  // 更新 xn
        xn1 = (xn + a / xn) / 2;  // 计算新的 xn1
    } while (fabs(xn1 - xn) >= 1e-5);  // 如果两次结果差大于等于 10^-5，继续迭代
    
    // 输出计算结果
    printf("xn1 = %f\n", xn1);
    return 0;
}



