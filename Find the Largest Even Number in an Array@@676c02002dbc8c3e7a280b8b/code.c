// Your code here...
#include <stdio.h>
#include <limits.h>

int main() {
    int n, max = INT_MIN;
    scanf("%d", &n);
    int arr[n];

    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if(arr[i] % 2 == 0 && arr[i] > max) {
            max = arr[i];
        }
    }

    if(max == INT_MIN)
        printf("-1");
    else
        printf("%d", max);
}