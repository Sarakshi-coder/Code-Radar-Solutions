#include <stdio.h>

int main() {
    int num, pos = 1;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num == 0) {
        printf("No set bit found.\n");
        return 0;
    }

    while (!(num & 1)) {
        num >>= 1;
        pos++;
    }

    printf("Lowest set bit is at position: %d\n", pos);
}