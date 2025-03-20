#include <stdio.h>
int main() {
    char a[100];
    int b;
    char c[100];
    scanf("%c",&a);
    scanf("%d",&b);
    scanf("%s",&c);
    printf("Name: %c",a);
    printf("Age: %d",b);
    printf("Hobby: %s",c);
    return 0;
}