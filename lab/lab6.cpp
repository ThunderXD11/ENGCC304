#include <stdio.h>

int main() {
    int N;
    printf("กรุณากรอกตัวเลข: ");
    
    if (scanf("%d", &N) != 1) {
        printf("กรุณากรอกเฉพาะตัวเลขเท่านั้น\n");
        return 1;
    }

    if (N % 2 == 1) {
        printf("ลำดับเลขคี่ คือ ");
        for (int i = 1; i <= N; i += 2) {
            printf("%d ", i);
        }
    } else {
        printf("ลำดับเลขคู่ คือ ");
        for (int i = N; i >= 0; i -= 2) {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}
