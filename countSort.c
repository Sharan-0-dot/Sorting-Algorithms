#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

void printArray(int arr[], int n) {
    for(int i=0;i<n;i++) {
        printf("%d ",arr[i]);
    }
    printf("\n");
}

void countSort(int arr[], int n) {
    int max = INT_MIN;

    for(int i=0;i<n;i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }

    int *b = (int *) malloc((max+1) * sizeof(int));
    for(int i=0;i<=max;i++) {
        b[i] = 0;
    }

    for(int i=0;i<n;i++) {
        b[arr[i]]++;
    }

    int i = 0,j = 0;
    while(i <= max) {
        if(b[i] > 0) {
            arr[j] = i;
            j++;
            b[i]--;
        } else {
            i++;
        }
    }

    free(b);
}

int main() {
    int arr[] = {32,3,1,54,7,98,99,3,12};
    int n = 9;

    printArray(arr, n);
    countSort(arr, n);
    printArray(arr, n);

    return 0;
}