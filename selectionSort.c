#include <stdio.h>

void printArray(int arr[], int n) {
    int i=0;
    while(i<n) {
        printf("%d ",arr[i]);
        i++;
    }
    printf("\n");
}

void selectionSort(int arr[], int n) {
    int min,temp;
    for(int i=0;i<n-1;i++) {
        min = i;
        for(int j=i+1;j<n;j++) {
            if(arr[j]<arr[min]) {
                min = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
}

int main() {
    int arr[] = {12,32,4,67,9,1};
    int n = 6;
    printArray(arr, n);
    selectionSort(arr, n);
    printArray(arr, n);

    return 0;
}