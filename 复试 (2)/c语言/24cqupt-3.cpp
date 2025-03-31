#include <stdio.h>
#include <string.h>

#define MAX 100

int mycopy(const char* buf, int len) {
    char mybuf[MAX]; 
    int a = 100;

    // 检查边界
    if (len <= 0 || len > MAX) {  
        return -1;
    }

    memcpy(mybuf, buf, len);
    printf("%d\n", a);
    
    return len;
}

int main(void) {
    printf("the copy len is %d\n", mycopy("hello", -2));  // 这里会返回 -1
    return 0;
}

