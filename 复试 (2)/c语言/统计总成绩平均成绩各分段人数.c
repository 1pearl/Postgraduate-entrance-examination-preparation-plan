#include <stdio.h>
int main(){
	float d[5]; //����5ѧ��
	int i;
	int cnt1=0;
	int cnt2=0;
	int cnt3=0;
	int cnt4=0;
	int cnt5=0;
	for(i=0;i<5;i++){
		scanf("%f",&d[i]);    //��Ҫ����&&&&&&&������������ 
	} 
	float sum=0;
	float average;
	for(i=0;i<5;i++){
		sum+=d[i];
		if(d[i]>=90) cnt1++;
		else if(d[i]>=80&&d[i]<90) cnt2++;
		else if(d[i]>=70&&d[i]<80) cnt3++;
		else if(d[i]>=60&&d[i<70]) cnt4++;
		else cnt5++;
	}
	average=sum/5.0;
	printf("ѧ���ܳɼ�Ϊ%.2f\nƽ���ɼ�Ϊ%.2f\n",sum,average);
	printf("90~100������Ϊ%d\n80~89������Ϊ%d\n70~79������Ϊ%d\n60~69������Ϊ%d\n60���µ�����Ϊ%d\n",cnt1,cnt2,cnt3,cnt4,cnt5);
	return 0;
}
