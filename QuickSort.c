#include <stdio.h>

int partition(int *arr, int l, int r) {
    int temp;
    int i = l;
    int pivot = arr[i];
    int j = l + 1;
    while (j <= r) {
        if (arr[j] < pivot) {
            i++;
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
        j++;
    }

    temp = arr[i];
    arr[i] = arr[l];
    arr[l] = temp;

    return i;
}

void quickSort(int *arr, int l, int r) {
    int center;

    if (l < r) {
        center = partition(arr, l ,r);
        quickSort(arr, l, center - 1);
        quickSort(arr, center + 1, r);
    }
}

int main() {
    int arr[] = {2,3,1,4,6,5,7,8,9,0};

    quickSort(arr, 0, 9);

    int i = 0;
    while (i < 10) {
        printf("%d ", arr[i]);
        i++;
    }

    return 0;
}
    

        
