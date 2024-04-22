#include <iostream> 
using namespace std; 


// Fungsi untuk mengurutkan karakter secara descending (Insertion Sort)
void insertionSortDescending(char arr[], int n) {
    for (int i = 1; i < n; i++) {
        char key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] < key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

int main() {
    int n;
    printf("Masukkan jumlah karakter: ");
    scanf("%d", &n);

    // Membuat array untuk menyimpan karakter
    char characters[n];

    // Meminta pengguna untuk memasukkan n karakter
    printf("Masukkan %d karakter:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Karakter ke-%d: ", i + 1);
        scanf(" %c", &characters[i]); // Menggunakan " %c" untuk menghindari whitespace
    }

    // Mengurutkan karakter secara descending
    insertionSortDescending(characters, n);

    // Menampilkan hasil pengurutan descending
    printf("\nKarakter setelah diurutkan secara descending:\n");
    for (int i = 0; i < n; i++) {
        printf("%c ", characters[i]);
    }

    return 0;
}

