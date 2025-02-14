#include <stdio.h>

int main() {
    int num, divisor;
    printf("Enter two numbers: ");
    scanf("%d %d", &num, &divisor);
    if (num % divisor == 0) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }
}