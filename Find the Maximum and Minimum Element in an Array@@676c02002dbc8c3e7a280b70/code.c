#include <stdio.h>

int main() {
    int n;
    scanf("%d", &N);  // Reading number of elements

    int arr[N];

    // Reading array elements
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    int min = arr[0];
    int max = arr[0];

    // Finding min and max
    for (int i = 1; i < N; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    // Printing result
    printf("%d %d\n", min, max);
}