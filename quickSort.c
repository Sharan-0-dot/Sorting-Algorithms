#include <stdio.h>

void printArray(int arr[], int n) {
    int i=0;
    while(i<n) {
        printf("%d ",arr[i]);
        i++;
    }
    printf("\n");
}

int partition(int arr[], int low, int high) {
    int temp;
    int pivot = arr[low];
    int i = low+1;
    int j = high;

    do {
    while(arr[i] <= pivot) {
        i++;
    }

    while(arr[j] > pivot) {
        j--;
    }

    if(i<j) {
    temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
    }

    } while(i<j);

    temp = arr[j];
    arr[j] = arr[low];
    arr[low] = temp;

    return j;
}

void quickSort(int arr[], int low, int high) {
    int partitionIndex;

    if(low<high) {
        partitionIndex = partition(arr, low, high);
        quickSort(arr, low, partitionIndex-1);
        quickSort(arr, partitionIndex+1, high);
    }

}

int main() {
    int arr[] = {34,1,3,76,98,45,23,11};
    int n = 8;
    printArray(arr, n);
    quickSort(arr, 0, n-1);
    printArray(arr, n);
    return 0;
}