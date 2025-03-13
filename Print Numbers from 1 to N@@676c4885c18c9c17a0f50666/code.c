#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);  // Read the value of N

    for (int i = 1; i <= N; i++) {
        printf("%d", i); // Print the number
        
        if (i < N) {  // Avoid space after the last number
            printf(" ");
        }
    }
}