#include <stdio.h>

int main() {
    int score, total = 0, count = 0;
    float average;

    printf("请输入学生成绩（输入 -1 结束）：\n");

    while (1) {
        scanf("%d", &score);
        
        if (score == -1) {
            break; // 结束循环
        }

        total += score;
        count++;
    }

    if (count > 0) {
        average = (float)total / count;
        printf("总成绩: %d\n", total);
        printf("平均成绩: %.2f\n", average);
    } else {
        printf("没有输入有效成绩。\n");
    }

    return 0;
}
