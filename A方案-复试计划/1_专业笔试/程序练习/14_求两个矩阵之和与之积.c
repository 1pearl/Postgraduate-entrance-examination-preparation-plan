#include <stdio.h>
#include <stdlib.h>

// ������ͺ���
void addMatrices(int A[3][3], int B[3][3], int C[3][3]) {
   int i,j;
   for(i=0;i<3;i++){
   	for(j=0;j<3;j++){
   		C[i][j] = A[i][j]+B[i][j];
	   }
   } 
}

//����ĳ˷� 
void multiplyMatrices(int A[3][3], int B[3][3], int C[3][3]) {
   int i,j,k;
    // ��ʼ������ C
    for (i = 0; i < 3; i++) {
       for (j = 0; j < 3; j++) {
            C[i][j] = 0; // ȷ������ C �ĳ�ʼֵΪ 0
        }
    }
   for(i=0;i<3;i++){
   	for(j=0;j<3;j++){
   	  for(k=0;k<3;k++){
   	  	   C[i][j] += A[i][k]*B[k][j];
		 }
	   }
   } 
}

// �������
void printMatrix(int matrix[3][3]) {
    int i, j;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main(){
	int A[3][3]={
	{1,2,3},
	{4,5,6},
	{7,8,9}};
	int B[3][3]={
	{9,8,7},
	{6,5,4},
	{3,2,1}};
	int C[3][3]={0};
	
	// ����ӷ�
    addMatrices(A, B, C);
    printf("Matrix A + Matrix B:\n");
    printMatrix(C);

    // ����˷�
    multiplyMatrices(A, B, C);
    printf("\nMatrix A * Matrix B:\n");
    printMatrix(C);
	
	return 0;
} 
