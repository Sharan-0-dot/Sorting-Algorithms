#include <stdio.h>

void printArray(int arr[], int n) {
    for(int i=0;i<n;i++) {
        printf("%d ",arr[i]);
    }
    printf("\n");
}

void merge(int arr[], int low, int mid, int high) {
    int i = low;
    int j = mid+1;
    int b[high+1];
    int k = low;

    while(i<=mid && j<=high) {

        if(arr[i] < arr[j]) {
            b[k] = arr[i];
            i++;
            k++;
        } else {
            b[k] = arr[j];
            j++;
            k++;
        }
    }

    while(i<=mid) {
        b[k] = arr[i];
        i++;
        k++;
    }

    while(j<=high) {
        b[k] = arr[j];
        j++;
        k++;
    }

    for(int i=low;i<=high;i++) {
        arr[i] = b[i];
    }
}

void mergeSort(int arr[], int low, int high) {

    if(low < high) {
        int mid = (low + high) / 2;

        mergeSort(arr, low, mid);
        mergeSort(arr, mid+1, high);
        merge(arr, low, mid, high);
    }
}

int main() {
    int arr[] = {78,98,23,1,6,76,22,11};
    int n = 8;

    printArray(arr, n);
    mergeSort(arr, 0, n-1);
    printArray(arr, n);
    return 0;
}