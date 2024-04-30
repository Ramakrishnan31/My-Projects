#include<stdio.h>

void selectionSort(int arr[], int n){
    int i, j, temp, minIndex;
    for( i = 0; i < n; i++){
        minIndex = i;
        for(j = i + 1; j < n; j++){
            if(arr[j] < arr[minIndex])
                minIndex = j;
        }
        temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}

int main(){
    int arr[] = {67,43,10,90,78,23,56,38};
    int n = sizeof(arr)/sizeof(arr[0]);

    selectionSort(arr, n);

    printf("Sorted array: ");
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
