#include <stdio.h>

/* Solution of selection problem */
void sort_array(int* array, int length) {
  int i = 0;
  for (; i < length; i++) {
    int j = i;
    for (; j < length; j++) {
      if (array[i] > array[j]) {
        int tmp = array[i];
        array[i]  = array[j];
        array[j] = tmp;
      }
    }
  }
}

int get_kth_max(int k, int* array, int length) {
  sort_array(array, length);
  return array[length - k];
}

void print(int* array, int length) {
  int i = 0;
  for (; i < length; i++) {
    printf("%d ", array[i]);
  }
}

int main() {
  int N = 10;
  int array[10] = {2, 4, 5, 7, 6, 1, 3, 9, 8, 0};
  int k = N / 2;
  int result = get_kth_max(k, array, N);
  printf("%d", result);
  return 0;
}
