#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//���Ԫ�����ĸ� 
double f(double x) {//����һ�����ֺ���x^2 
	return x*x - 2;
}

double d_f(double x) {
	return 2*x;
}
//������
/*
(*fun)(double):����һ������ 
a:����
b:����
n:������� 
*/
double definite_integration(double (*f)(double),double a,double b,int n){
	double h = (b-a)/n;
	double sum = (f(a)+f(b))*0.5;
	int i;
	for(i=1;i<n;i++){
		sum+=f(a+h*i);
	}
	return sum * h;
	 
}
//ţ�ٵ�����
/*
f����
df�󵼺���
x0�µ�ֵ
max_iter��������
tol������� 
*/
double newtonMethod(double (*f)(double), double (*df)(double), double x0, int max_iter, double tol) {
    double x = x0;
    int i;
    for(i=0;i<max_iter;i++){
    	double fx = f(x);
    	double dfx = df(x);
    	if(fabs(fx) < tol){ // �жϵ�ǰ���Ƿ��㹻��ȷ
    		return x; // �������㹻С�����ص�ǰ��
		}
		x = x - fx/dfx;  
	}
	return x;
}
//���ַ�
/*
f:���� 
a:�²�ֵ1 
b:�²�ֵ2 
tol:��� 
max_iter:�������� 
*/ 
double bisectionMethod(double (*f)(double), double a, double b, double tol, int max_iter) {
    double m;
    int i;
    for(i=0;i<max_iter;i++){
    	m = (a + b)/2;
    	if(fabs(f(m)) < tol){
    		return m;
		}
		if(f(a)*f(m)>0){// �ж��е㺯��ֵ�ķ��ţ���������
			a = m; // �����Ұ�����
		} else {
			b = m; // �����������
		}
	}
	return m;
}
//�ҽط�
/*
f:����
x0:���Բ²�ֵ
x1:���Բ²�ֵ
tol:���
max_iter:�������� 
*/
double secantMethod(double (*f)(double), double x0, double x1, double tol, int max_iter) {
    double x2;
    int i;
	for(i=0;i<max_iter;i++){
		x2 = x1 - (f(x1)*(x1-x0))/(f(x1)-f(x0));
		if(fabs(f(x2)) < tol) {
			return x2;
		}
		x0=x1;
		x1=x2;
	}
	return x2; 
}

int main(){
	
//	int a,b,n;
//	scanf("%d%d%d",&a,&b,&n);
//	printf("%.6f",definite_integration(f,a,b,n));
	
	double tol = 1e-6;
	int iter = 1000;
	double i,a,b;
//	scanf("%lf",&i);
//	printf("%.6f",newtonMethod(f,d_f,i,iter,tol));
	scanf("%lf%lf",&a,&b);
//	printf("%.6f",bisectionMethod(f,a,b,tol,iter));
	printf("%.6f",secantMethod(f,a,b,tol,iter));
	return 0;
} 
