#include <stdio.h>
#include <string.h>

void bubbleSort(char arr[][20], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (strcmp(arr[j], arr[j + 1]) > 0) {
                char temp[20];
                strcpy(temp, arr[j]);
                strcpy(arr[j], arr[j + 1]);
                strcpy(arr[j + 1], temp);
            }
        }
    }
}

int main() {
    char names[10][20] = {"siti", "situ", "sana", "ana", "ani", "caca", "cici", "dida", "dodo", "dadi"};
    int n = sizeof(names) / sizeof(names[0]);

    printf("Nama-nama sebelum diurutkan:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", names[i]);
    }
    printf("\n");

    bubbleSort(names, n);

    printf("Nama-nama setelah diurutkan secara alfabetis:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", names[i]);
    }

    return 0;
}

