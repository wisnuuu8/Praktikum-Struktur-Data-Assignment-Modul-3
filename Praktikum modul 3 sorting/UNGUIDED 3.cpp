#include <stdio.h>

// Fungsi untuk mengurutkan karakter secara menaik (ascending)
void ascendingSort(char arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                char temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Fungsi untuk mengurutkan karakter secara menurun (descending)
void descendingSort(char arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                char temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n;
    printf("Masukkan jumlah karakter (n): ");
    scanf("%d", &n);

    // Membuat array untuk menyimpan karakter
    char characters[n];

    // Meminta pengguna untuk memasukkan n karakter
    printf("Masukkan %d karakter:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Karakter ke-%d: ", i + 1);
        scanf(" %c", &characters[i]); // Menggunakan " %c" untuk menghindari whitespace
    }

    // Mengurutkan karakter secara menaik (ascending)
    ascendingSort(characters, n);

    // Menampilkan hasil pengurutan menaik
    printf("\nKarakter setelah diurutkan secara menaik:\n");
    for (int i = 0; i < n; i++) {
        printf("%c ", characters[i]);
    }

    // Mengurutkan karakter secara menurun (descending)
    descendingSort(characters, n);

    // Menampilkan hasil pengurutan menurun
    printf("\nKarakter setelah diurutkan secara menurun:\n");
    for (int i = 0; i < n; i++) {
        printf("%c ", characters[i]);
    }

    return 0;
}

