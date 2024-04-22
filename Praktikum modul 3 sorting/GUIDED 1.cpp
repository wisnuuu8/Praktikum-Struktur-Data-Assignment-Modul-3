#include <iostream> 
using namespace std; 

// Fungsi untuk mengurutkan data numerik secara ascending (bubble sort)
void bubbleSort(double arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                double temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n;
    printf("Masukkan jumlah data numerik: ");
    scanf("%d", &n);

    // Membuat array untuk menyimpan data numerik
    double data[n];

    // Meminta pengguna untuk memasukkan data numerik
    printf("Masukkan %d data numerik:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Data ke-%d: ", i + 1);
        scanf("%lf", &data[i]);
    }

    // Mengurutkan data numerik secara ascending
    bubbleSort(data, n);

    // Menampilkan hasil pengurutan ascending
    printf("\nData setelah diurutkan secara ascending:\n");
    for (int i = 0; i < n; i++) {
        printf("%.2lf ", data[i]);
    }

    return 0;
}

