#include <stdio.h>

int main() {
    int N, i, j, num;
    scanf("%d", &N);
    num = 1;

    for (i = 1; i <= N; i++) {
        for (j = 1; j <= N - i; j++) {
            printf("  ");
        }
        for (j = 1; j <= i; j++) {
            printf("%d ", num);
            num++;
        }

        printf("\n");
    }

    return 0;
}