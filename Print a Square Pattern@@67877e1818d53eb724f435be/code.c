#include <stdio.h>

void printSquare(int n) {
    // Outer loop for the number of rows
    for (int i = 0; i < n; i++) {
        // Inner loop for printing stars in each column
        for (int j = 0; j < n; j++) {
            printf("*");
        }
        // Print a new line after each row
        printf("\n");
    }
}

int main() {
    int n;

    // Input the side length of the square
    printf("Enter the side length of the square: ");
    scanf("%d", &n);

    // Call the function to print the square pattern
    printSquare(n);

    return 0;
}
