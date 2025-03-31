#include <stdio.h>

int main() {
    int year;
    printf("请输入一个年份: ");
    scanf("%d", &year);

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("TRUE\n");
    } else {
        printf("FALSE\n");
    }

    return 0;
}

