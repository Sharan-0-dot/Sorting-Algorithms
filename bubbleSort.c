#include <stdio.h>
#include <stdlib.h>

void printArray(int a[], int n) {
    for(int i=0;i<n;i++) {
        printf("%d ",a[i]);
    }
    printf("\n");
}

void bubbleSort(int a[], int n) {
    int temp = 0;
    int isSorted = 1;
    for(int i=0; i<n-1; i++) {
        for(int j=0; j<n-1-i; j++) {
            if(a[j] > a[j+1]) {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
                isSorted = 0;
            }
        }
        if(isSorted) {
            return;
        }
    }
}

int main() {
    int a[] = {12,54,65,7,23,9};
    int n = 6;
    printArray(a, n);
    bubbleSort(a, n);
    printArray(a, n);
    return 0;
}