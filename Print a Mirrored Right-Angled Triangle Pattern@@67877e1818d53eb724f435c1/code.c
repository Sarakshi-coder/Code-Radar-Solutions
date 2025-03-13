#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    // Loop through each row
    for(int i = 1; i <= N - 1; i++) {
        // Print spaces
        for(int j = 1; j <= N - i; j++) {
            printf(" ");
        }

        // Print stars
        for(int k = 1; k <= i; k++) {
            printf("*");
        }

        // Move to the next line
        printf("\n");
    }

    return 0;
}
