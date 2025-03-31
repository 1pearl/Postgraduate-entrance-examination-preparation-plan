 #include <stdio.h>
#include <math.h>
// 若f(x)=x^3+2x^2+3x+4 


//int main(){
	//一、 牛顿迭代法求根   牛顿迭代公式 x=x0-f(x0)/f'(x0)  
//	float a1=1.0,a;
//	a=a1-(a1*a1*a1+2*a1*a1+3*a1+4)/(3*a1*a1+4*a1+3);
//	while(fabs(a-a1)>1e-3){
//		a1=a;
//		a=a1-(a1*a1*a1+2*a1*a1+3*a1+4)/(3*a1*a1+4*a1+3);
//	}
//	printf("%.7f\n",a);
//	
	//二、二分法求根 https://blog.csdn.net/m0_62314267/article/details/136592055 
//#include <stdio.h>
//#include <math.h>
//int main() {
//	double left = -10, right = 10;
//	double mid = 1.0*(left + right) / 2;   
//	double c = 2 * mid * mid * mid - 4 * mid * mid + 3 * mid - 6;    
//	while (fabs(c-0) >= 1e-5) {
//		if (c >= 0) {
//			right = mid;
//			mid= 1.0 * (left + right) / 2;
//			c = 2 * mid * mid * mid - 4 * mid * mid + 3 * mid - 6;
//		}
//		else if (c < 0) {
//			left = mid;
//			mid = 1.0 * (left + right) / 2;
//			c = 2 * mid * mid * mid - 4 * mid * mid + 3 * mid - 6;
//		}
//	}
//	printf("用二分法求方程在(-10,10)的根为：%lf", mid);
//	return 0;
//}

	
#include<stdio.h>
#include<math.h>
int main()
{
	int i, n = 20;
	float s1=0, h, x, a, b, t1, t2;
	printf("请输入定积分区间:");
	scanf_s("%f,%f", &a, &b);
	h = (b - a) / n; 
	for (i = 0; i < n; i++)
	{
		x = a + (i - 1) * h;
		t1 = (float)exp( x );
		t2 = exp( (x + h));
		s1= s1 + (t1 + t2) * h / 2;
	}
	printf("梯形法算得积分值：%f\n", s1);
}



//	return 0;
//}
