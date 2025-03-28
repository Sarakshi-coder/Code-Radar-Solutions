#include<stdio.h>
int main(){
    int N,i;
    scanf("%d",&N);
    for(int i=0;i<=N;i++){
        for(int j=0;j<=N-i-1;j++)
        printf(" ");
    }
    for(int k=0;k<=i;k++){
        printf("%c",'A'+k);
    }
printf("\n");
}