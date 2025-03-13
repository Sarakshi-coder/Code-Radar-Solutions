#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);  // Read the input number

    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", N, i, N * i);  // Print multiplication result
    }

}