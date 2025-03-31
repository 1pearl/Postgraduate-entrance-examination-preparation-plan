#include <stdio.h>
#include <stdlib.h>
#define SUBJECT 3

typedef struct{
char name[20];
int English;
int Math;
int Major;
double Average;
int Total;
}Student;

void InputInfor(Student *students,int n) {
	int i;
	for(i=0;i<n;i++) {
		printf("��¼���%d��ѧ���ĳɼ�\n",i+1);
		printf("������ѧ��������\n");
		scanf("%s",&students[i].name);
		printf("������ѧ����Ӣ��ɼ���\n");
		scanf("%d",&students[i].English);
		printf("������ѧ������ѧ�ɼ���\n");
		scanf("%d",&students[i].Math);
		printf("������ѧ����רҵ�γɼ���\n");
		scanf("%d",&students[i].Major);
		students[i].Total=students[i].English+students[i].Math+students[i].Major;
		students[i].Average = students[i].Total/(double)SUBJECT;
	}
}

void display(Student *students,int n){
	printf("\nѧ���ɼ�ͳ��:\n");
    printf("����\t��ѧ\tӢ��\tרҵ��\t�ܳɼ�\tƽ���ɼ�\n");
    int i;
    for (i = 0; i < n; i++) {
        printf("%s\t%d\t%d\t%d\t%d\t%.2f\n",
               students[i].name, students[i].Math, students[i].English, students[i].Major,
               students[i].Total, students[i].Average);
    }

    // ͳ�Ʒ���������
    printf("\n�ɼ��ֲ�ͳ��:\n");
    GradeDistribution(students,n);
} 

void GradeDistribution(Student *student, int n) {
	int i;
	int grade[5] = {0};
	for(i=0;i<n;i++){
		if(student[i].Average<60){
			grade[0]++;
		} else if(student[i].Average>=60&&student[i].Average<=70){
			grade[1]++;
		} else if(student[i].Average>=70&&student[i].Average<=80){
			grade[2]++;
		} else if(student[i].Average>=80&&student[i].Average<=90){
			grade[3]++;
		} else {
			grade[4]++;
		}
	}
	printf("ƽ���ɼ�С��60�������У�%d\n",grade[0]);
	printf("ƽ���ɼ����ڵ���60С�ڵ���70�������У�%d\n",grade[1]);
	printf("ƽ���ɼ����ڵ���70С�ڵ���80�������У�%d\n",grade[2]);
	printf("ƽ���ɼ����ڵ���80С�ڵ���90�������У�%d\n",grade[3]);
	printf("ƽ���ɼ�����90�������У�%d\n",grade[4]);
}

int main(){
	printf("Ҫ¼��ѧ���ɼ�������Ϊ:");
	int n,i;
	Student *students;
	scanf("%d",&n);
	students = (Student*)malloc(sizeof(Student)*n);
	InputInfor(students,n);
	display(students,n);
	free(students);
	students = NULL;
	return 0;
} 
