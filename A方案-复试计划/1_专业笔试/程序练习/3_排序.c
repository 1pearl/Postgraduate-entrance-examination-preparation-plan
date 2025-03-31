#include "stdio.h"
#include "stdlib.h"

//1.ð������ ,�˵ı���������ͨ 
void bubblesort(int *arr,int len){
	int i,j,temp;
	for(i=0;i<len;i++){
		for(j=0;j<len-i-1;j++){
			if(arr[j]>arr[j+1]){
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp; 
			}
		}
	}
}

//2.ѡ������:https://www.bilibili.com/video/BV1mmrUY8Evu/?spm_id_from=333.337.search-card.all.click&vd_source=4d8bdaa129d34a4905c8db625c08e44d 
void SelectionSort(int* arr,int len) {
	int i,j,minR,temp;
	for(i=0;i<len-1;i++){
		minR = i;//��¼��Сֵ���±� 
		for(j=i+1;j<len;j++){
			if(arr[j]<arr[minR]){
				minR = j;
			}
		}
		temp = arr[minR];
		arr[minR] = arr[i];
		arr[i] = temp;
	}
}

//3.��������:https://www.bilibili.com/video/BV19J4m1875v/?spm_id_from=333.337.search-card.all.click&vd_source=4d8bdaa129d34a4905c8db625c08e44d 
void InsertionSort(int arr[], int len) {//8 4 3
     int i,j,key;
     for(i = 1;i<len;i++){
     	key = arr[i];//��¼ǰһ����,(arr[1])4 
     	j = i-1;//��¼��һ����,arr[0](8) 
     	while(j>=0&&arr[j]>key){//8>4
     		arr[j+1] = arr[j];//arr[1] = arr[0] = 8
     		j--;//j =0-1=-1
		 }
		arr[j+1] = key;//arr[-1+1=0]=4 
	 }
}

//4.ϣ������ 
void ShellSort(int *arr, int len) {
     int i,j,key,gap;//"7" 6 5 4 "3" 2 1 0
     for(gap=len/2;gap>0;gap/=2){//gap = 8/2 = 4, gap = (4,2,1)
     	for(i=gap;i<len;i++){
     		key=arr[i];//key=arr[4]=3(3)
     		j=i-gap;//j=i-gap=4-4=0(7)
     		while(j>=0&&arr[j]>key){//arr[0] = 7 > key=3 (7>3)
     			arr[j+gap]=arr[j];//arr[4]=arr[0]=7
     			j-=gap;//j=0-4=-4
			 }
			 arr[j+gap]=key;//arr[-4+4=0]=3,  arr[0]=3  arr[4]=7
		 }
	 }
}

//void ShellSort(int arr[], int len) {
//    int i, j, key, gap;
//
//    // ��ʼgapΪ�����һ�룬Ȼ���𲽼�С��ֱ��gap=1
//    for (gap = len / 2; gap > 0; gap /= 2) {
//        // �Ե�ǰgapֵ�������н��в�������
//        for (i = gap; i < len; i++) {
//            key = arr[i];  // ��¼��ǰԪ��
//            j = i - gap;  // j��i-gab��ʼ
//
//            // ������key��Ԫ������ƶ�
//            while (j >= 0 && arr[j] > key) {
//                arr[j + gap] = arr[j];  // ����ƶ�
//                j -= gap;  // j��ȥgap
//            }
//
//            // ��key���뵽��ȷ��λ��
//            arr[j + gap] = key;
//        }
//    }
//}


//5.������:�����󶥶�
//��Ƶ����:https://www.bilibili.com/video/BV1fp4y1D7cj/?spm_id_from=333.337.search-card.all.click&vd_source=4d8bdaa129d34a4905c8db625c08e44d 
//ά���ѵ����� 
void  heapify(int *arr,int len,int i){
	int largest = i;//���Ľڵ��±� 
	int lson = i*2+1;//���� 
	int rson = i*2+2;//�Һ���
	if(lson<len&&arr[largest]<arr[lson])//������ӱȸ��ڵ�󣬽����ֵ�±긳ֵ�����ڵ��±� 
	    largest=lson;
	if(rson<len&&arr[largest]<arr[rson])//����Һ��ӱȸ��ڵ�� 
	    largest=rson;
	if(largest != i){
		swap(&arr[largest],&arr[i]);//�������ڵ��븸�ڵ�
		heapify(arr,len,largest);//�ݹ���� 
	}			
}

void swap(int *a,int *b) {
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
void HeapSort(int *arr, int n) {
    int i;
    //������
	for(i=n/2-1;i>=0;i--){//i = n/2 - 1��ʾ�ҵ����ڵ� 
		heapify(arr,n,i);
	}
	//����
	for(i=n-1;i>0;i--){
		swap(&arr[i],&arr[0]);
		heapify(arr,i,0);
	}
}

//6.�鲢����
int MergeSort(int *arr, int n) {
     //����һ����������
	 int *tempArr = (int *)malloc(n*sizeof(int));
	 if(tempArr){
	 	msort(arr,tempArr,0,n-1);
	 	free(tempArr);
	 } else {
	 	printf("error:failed to allocate memory!");
	 } 
}

void merge(int *arr,int *tempArr,int left,int mid,int right){
	//����������һ��δ�����Ԫ��
	int l_pos = left;
	//����Ұ�����һ��δ�����Ԫ�� 
	int r_pos = mid+1;
	//��ʱ����Ԫ�ص��±�
	int pos = left;
	
	//�������Ԫ�أ��Ұ���Ҳ��Ԫ��
	while(l_pos <= mid && r_pos <= right){
		if(arr[l_pos] < arr[r_pos]){//�������һ��Ԫ�ظ�С 
			tempArr[pos++] = arr[l_pos++];
		} else {                    //�Ұ�����ʣ��Ԫ�ظ�С 
			tempArr[pos++] = arr[r_pos++];
		}
	} 
	//�ϲ������ʣ��Ԫ�� 
	while(l_pos <= mid){
		tempArr[pos++] = arr[l_pos++];
	} 
	//�ϲ��Ұ���ʣ���Ԫ��
	while(r_pos <= right){
		tempArr[pos++] = arr[r_pos++];
	}
	//����ʱ�����кϲ����Ԫ�ظ��ƻ�ԭ��������
	while(left <= right){
		arr[left] = tempArr[left];
		left++;
	} 
} 

void msort(int *arr,int *tempArr,int left,int right) {
	//���ֻ��һ��Ԫ�ؾͲ���Ҫ������
	if(left<right){
		//�� 
		int mid = (left+right)/2;//���м�� 
	    msort(arr,tempArr,left,mid);//�ݹ������
		msort(arr,tempArr,mid+1,right);//�ݹ��Ұ���
		//��
		//�ϲ��Ѿ�����Ĳ��� 
		merge(arr,tempArr,left,mid,right);	
	} 
}

//7.��������:https://www.bilibili.com/video/BV1vP411g7J3/?spm_id_from=333.337.search-card.all.click&vd_source=4d8bdaa129d34a4905c8db625c08e44d
void QuickSort(int *arr,int left,int right){
	int pivot;
	if(left < right) {
     	pivot = Partition(arr,left,right);
		QuickSort(arr,left,pivot-1);
		QuickSort(arr,pivot+1,right);  
	}
}
 
int Partition(int *arr, int left, int right) {
     int pivot;
     pivot = arr[left];
     while(left<right){
     	while(left<right&&pivot<=arr[right]) right--;
     	arr[left]=arr[right];
     	while(left<right&&pivot>=arr[left]) left++;
     	arr[right]=arr[left];
	 }
	 arr[right]=pivot;
	 return right;
}


//8.��������
void RadixSort(int *arr, int arrLen) {
  
}

int main(){
	int i,j;
	int *p;
	printf("������Ҫ��������ָ���\n");
	scanf("%d",&j);
	p = (int*)malloc(sizeof(int)*j);
	printf("������Ҫ���������\n");
	for(i=0;i<j;i++){
		scanf("%d",p+i);
	}
//    bubblesort(p,j);
//    SelectionSort(p,j);
//    InsertionSort(p,j);
//    QuickSort(p,0,j-1);
//    ShellSort(p,j);
//    HeapSort(p,j);
      MergeSort(p,j);
    for(i=0;i<j;i++){
    	printf("%d ",*(p+i));
	}
	free(p);
	p=NULL; 
	return 0;
}


