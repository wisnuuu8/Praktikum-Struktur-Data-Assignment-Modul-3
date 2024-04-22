#include <stdio.h>

void selectionSort(float arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int maxIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] > arr[maxIndex]) {
                maxIndex = j;
            }
        }
        if (maxIndex != i) {
            float temp = arr[i];
            arr[i] = arr[maxIndex];
            arr[maxIndex] = temp;
        }
    }
}

int main() {
    float ips[] = {3.8, 2.9, 3.3, 4.0, 2.4};
    int n = sizeof(ips) / sizeof(ips[0]);

    printf("IPS sebelum diurutkan:\n");
    for (int i = 0; i < n; i++) {
        printf("%.1f ", ips[i]);
    }
    printf("\n");

    selectionSort(ips, n);

    printf("IPS setelah diurutkan dari yang terbesar hingga terkecil:\n");
    for (int i = 0; i < n; i++) {
        printf("%.1f ", ips[i]);
    }
    printf("\n");

    return 0;
}

