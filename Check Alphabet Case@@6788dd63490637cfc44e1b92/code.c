#include <stdio.h>

int main() {`
    char ch;
    scanf("%c", &ch);
     if(ch >= 'A' && ch <= 'Z') {
        printf("Uppercase\n");
    } else(ch >= 'a' && ch <= 'z') {
        printf("Lowercase\n");
    } 
}