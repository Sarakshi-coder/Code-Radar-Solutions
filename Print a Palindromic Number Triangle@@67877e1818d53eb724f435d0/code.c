#include <stdio.h>

int main() {
    int N, i, j, k, num;
    scanf("%d", &N);
    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= rows - i; j++) {
            printf("  "); 
        }
        num = i;
        for (k = 1; k <= i; k++) {
            printf("%d ", num);
            num++;
        }
        num = num - 2;
        for (k = 1; k < i; k++) {
            printf("%d ", num);
            num--;
        }

        printf("\n");
    }

    return 0;
}