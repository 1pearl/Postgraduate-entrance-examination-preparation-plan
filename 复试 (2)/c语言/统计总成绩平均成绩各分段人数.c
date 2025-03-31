#include <stdio.h>
int main(){
	float d[5]; //假设5学生
	int i;
	int cnt1=0;
	int cnt2=0;
	int cnt3=0;
	int cnt4=0;
	int cnt5=0;
	for(i=0;i<5;i++){
		scanf("%f",&d[i]);    //不要忘了&&&&&&&！！！！！！ 
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
	printf("学生总成绩为%.2f\n平均成绩为%.2f\n",sum,average);
	printf("90~100的人数为%d\n80~89的人数为%d\n70~79的人数为%d\n60~69的人数为%d\n60以下的人数为%d\n",cnt1,cnt2,cnt3,cnt4,cnt5);
	return 0;
}
