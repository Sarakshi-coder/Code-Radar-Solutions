#include <stdio.h>
int main() {
    int N, i, j;
    scanf("%d", &N);
    for (i = -N + 1; i < N; i++) {
        for (j = 0; j < abs(i); j++) printf(" ");
        for (j = 0; j < 2 * (N - abs(i)) - 1; j++) printf("*");
        printf("\n");
    }
    return 0;
}
//int main() {
    //int n;
    //scanf("%d", &n);
    //for (int i = 1; i <= n; i++) {
      //  for (int j = 1; j <= n - i; j++) {
        //    printf(" ");
        //}
        //for (int j = 1; j <= 2 * i - 1; j++) {
          //  printf("*");
        //}
       // printf("\n");
    //}
    //for (int i = n - 1; i >= 1; i--) {
      //  for (int j = 1; j <= n - i; j++) {
        //    printf(" ");
        //}
        //for (int j = 1; j <= 2 * i - 1; j++) {
          //  printf("*");
       // }
       // printf("\n");
    //}

    //return 0;
//}