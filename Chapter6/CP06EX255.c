#include "allinclude.h"

void bubbleSortAscending(int arr[], int start, int end) {
    for (int i = start; i < end - 1; i++) {
        for (int j = start; j < end - 1 - (i - start); j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void bubbleSortDescending(int arr[], int start, int end) {
    for (int i = start; i < end - 1; i++) {
        for (int j = start; j < end - 1 - (i - start); j++) {
            if (arr[j] < arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main(int n, int a[], int size) {
    // 前半部分从小到大排序
    bubbleSortAscending(a, 0, n / 2);
    
    // 后半部分从大到小排序
    bubbleSortDescending(a, (n % 2 == 0) ? n / 2 : n / 2 + 1, n);

    for (int i = 0; i < size; i++) {
        printf("%d ", a[i]);
    }
}
