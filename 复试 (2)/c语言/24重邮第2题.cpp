#include <stdio.h>

int main() {
    int score, total = 0, count = 0;
    float average;

    printf("������ѧ���ɼ������� -1 ��������\n");

    while (1) {
        scanf("%d", &score);
        
        if (score == -1) {
            break; // ����ѭ��
        }

        total += score;
        count++;
    }

    if (count > 0) {
        average = (float)total / count;
        printf("�ܳɼ�: %d\n", total);
        printf("ƽ���ɼ�: %.2f\n", average);
    } else {
        printf("û��������Ч�ɼ���\n");
    }

    return 0;
}
