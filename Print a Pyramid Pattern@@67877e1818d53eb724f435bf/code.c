#include <stdio.h>

void printPyramid(int n) {
    // Outer loop for the number of rows
    for (int i = 1; i <= n; i++) {
        // Print leading spaces
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }

        // Print stars
        for (int k = 1; k <= (2 * i - 1); k++) {
            printf("*");
        }

        // Move to the next line after each row
        printf("\n");
    }
}

int main() {
    int n;

    // Input number of rows
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    // Call function to print the pyramid pattern
    printPyramid(n);

    return 0;
}
