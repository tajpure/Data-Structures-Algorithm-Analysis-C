#include <stdio.h>

int partition(int *arr, int l, int r) {
    int i = l;
    int pivot = arr[i];
    int temp;
    int j = r + 1;

    while (1) {
        /*do ++i;*/ while (arr[++i] < pivot && i < r);
        /*do --j;*/ while (arr[--j] > pivot && j > l);
        //printf("i:%d, j:%d\n", i, j);
        if (i >= j) {
            break;
        }
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    
    temp = arr[j];
    arr[j] = arr[l];
    arr[l] = temp;

    return j;
}

void quickSort(int *arr, int l, int r) {
    int pivot;

    if (l < r) {
        pivot = partition(arr, l, r);
        /*int i = 0;
        while (i < 10) {
            printf("%d ", arr[i]);
            i++;
        }
        printf("\n");*/
        quickSort(arr, l, pivot - 1);
        quickSort(arr, pivot + 1, r);
    }
}

int main() {
    int arr[] = {4,3,2,5,1,9,0,7,8,6};

    int i = 0;
    while (i < 10) {
        printf("%d ", arr[i]);
        i++;
    }
        printf("\n");
    quickSort(arr, 0, 9);

    i = 0;
    while (i < 10) {
        printf("%d ", arr[i]);
        i++;
    }

    return 0;
}
