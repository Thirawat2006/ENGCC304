#include <stdio.h>

int main() {
    int N = 0;

    printf("Enter value: ");
    if (scanf("%d", &N) != 1) {
        printf("sorry\n");
        return 1; // ถ้าผู้ใช้ป้อนไม่ใช่เลข
    }

    printf("Series: %d\n", N);

    if (N % 2 == 1) {
        for (int i = 1; i <= N; i += 2) {
            printf("%d ", i);
        }
    } else {
        for (int i = N; i >= 0; i -= 2) {
            printf("%d ", i);
        }
    }

    return 0;
}
