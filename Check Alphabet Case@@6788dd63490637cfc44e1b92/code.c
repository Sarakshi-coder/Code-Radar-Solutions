#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;
    scanf("%c", &ch);
    if (isupper(ch)) {
        printf("'%c'Uppercase \n", ch);
    }
    else  (islower(ch)) {
        printf("'%c'  Lowercase \n", ch);
    }
    return 0;
}
