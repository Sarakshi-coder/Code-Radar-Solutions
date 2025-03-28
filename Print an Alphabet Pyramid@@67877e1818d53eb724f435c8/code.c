#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        for (int k = 0; k <= i; k++) {
            printf("%c ", 'A' + k);
        }
        printf("\n");
    }
    return 0;
}