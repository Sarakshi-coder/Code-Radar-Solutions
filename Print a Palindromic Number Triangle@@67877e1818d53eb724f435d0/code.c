#include <stdio.h>

int main() {
    int N, i, j, k, num;
    scanf("%d", &N);

    for (i = 1; i <= N; i++) {
        for (j = 1; j <= N - i; j++) {
            printf(" "); 
        }
        num = i;
        for (k = 1; k <= i; k++) {
            printf("%d", k); 
        }
        num = i - 1;
        for (k = 1; k < i; k++) {
            printf("%d", num);
            num--;
        }

        printf("\n");
    }

    return 0;
}