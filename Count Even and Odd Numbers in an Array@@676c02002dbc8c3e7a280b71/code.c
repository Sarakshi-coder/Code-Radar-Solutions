#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    int even=0;
    int odd=0;
    for(int i=0;i<N;i++){
        if(arr[i]%2==0){
            printf("%d",arr[i]);
        }if(arr[i]%2 !=0){
            printf("%d",arr[i]);
        }
    }
    //printf("%d %d\n",even,odd);
}