#include<stdio.h>
#include<stdlib.h> // For malloc and free

void bubbleSort(int arr[], int n){
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

 main(){
    int n;
    scanf("%d", &n);
    int* arr = (int*)malloc(n * sizeof(int)); // Dynamic array

    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    bubbleSort(arr, n);
    printArray(arr, n);

    free(arr); // Free the dynamically allocated memory
    return 0;
}
