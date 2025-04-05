#include <stdio.h>

// Function to check if a number is prime
int isPrime(int n) {
    if (n <= 1) return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int main() {
    int t, num;
    scanf("%d", &t);  // Read number of test cases

    while (t--) {
        scanf("%d", &num);       // Read each number
        printf("%d\n", isPrime(num));  // Output 1 if prime, 0 otherwise
    }

    return 0;
}