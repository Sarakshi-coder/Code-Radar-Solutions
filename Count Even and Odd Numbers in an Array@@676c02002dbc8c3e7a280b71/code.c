#include<stdio.h>
int main(){
    int n,i;
    scanf("%d",&n);
    int array[n];
    for(i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    int count_even=0;
    int count_odd=0;
    for(i=0;i<n;i++){
        if(array[i]%2==0){
            count_even++;
        }
        else{
            count_odd++;
        }
    }
    printf("%d ",count_even);
    printf("%d",count_odd);
}