**BAB 1**

**PENDAHULUAN**

**LATAR BELAKANG**

Sorting adalah proses mengatur kumpulan item ke dalam urutan tertentu. Ini adalah operasi umum dalam komputer sains dan pemrograman, diterapkan dalam berbagai konteks seperti database, pemrosesan string, dan algoritma pencarian. Sorting penting karena memungkinkan kita untuk mengakses data dengan lebih efisien, membuatnya lebih mudah untuk mencari, membandingkan, dan menganalisis.

Ada berbagai algoritma sorting yang berbeda dengan kompleksitas waktu dan ruang yang berbeda pula. Di antara algoritma-algoritma tersebut adalah:

Bubble Sort: Algoritma yang sederhana dan mudah dimengerti di mana item-item berpasangan diurutkan dan pertukaran dilakukan jika diperlukan.
Insertion Sort: Mengurutkan item satu per satu, dengan menempatkan setiap item di tempat yang sesuai dengan urutan yang benar.
Selection Sort: Pada setiap iterasi, mencari elemen terkecil dan menukar dengan elemen pertama, kemudian mengulangi proses pada bagian sisa dari array.

**TUJUAN**

Memahami dan menerapkan beberapa algoritma sorting dalam menyelesaikan berbagai studi kasus

**BAB 2**

**PEMBAHASAAN**

Konsep Dasar Sorting

Berdasarkan data terurutnya, algoritma sorting dibagi menjadi dua jenis, yaitu

Ascending (Menaik): Dalam urutan ascending, item-item disusun dari nilai terkecil ke nilai terbesar. Artinya, elemen dengan nilai paling rendah akan berada di bagian awal atau depan, sedangkan elemen dengan nilai tertinggi akan berada di bagian akhir atau belakang[1].

Descending (Menurun): Sebaliknya, dalam urutan descending, item-item disusun dari nilai terbesar ke nilai terkecil. Dengan kata lain, elemen dengan nilai tertinggi akan berada di bagian awal atau depan, sedangkan elemen dengan nilai paling rendah akan berada di bagian akhir atau belakang.

**INSERTION SORT**

Algoritma Insertion Sort adalah salah satu algoritma sorting sederhana yang efisien untuk mengurutkan kumpulan data. Ini bekerja dengan cara membandingkan setiap elemen dengan elemen sebelumnya dalam array, dan memasukkan elemen tersebut ke dalam posisi yang tepat sesuai dengan urutan yang diinginkan. Berikut adalah konsep dasar dari algoritma Insertion Sort:

1. Iterasi Melalui Array : Algoritma dimulai dengan mengiterasi melalui array, dimulai dari indeks kedua (indeks 1), karena elemen pertama dianggap sudah terurut.

2. Pengecekan dan Penyisipan : Pada setiap iterasi, algoritma membandingkan elemen saat ini dengan elemen-elemen sebelumnya dalam array. Jika elemen saat ini lebih kecil dari elemen sebelumnya, algoritma akan memindahkan elemen tersebut ke posisi yang benar di dalam array dengan cara menyisipkannya ke dalam posisi yang tepat. Ini dilakukan dengan cara memindahkan elemen-elemen yang lebih besar satu posisi ke kanan.

3. Iterasi Berlanjut : Proses ini diulangi untuk setiap elemen dalam array, sehingga setiap elemen diposisikan dengan benar di dalam urutan yang diinginkan.

4. Penyelesaian : Setelah iterasi selesai, array akan berada dalam keadaan terurut, dari elemen terkecil ke elemen terbesar.

Algoritma Insertion Sort sangat efisien untuk mengurutkan kumpulan data yang relatif kecil atau hampir terurut, tetapi mungkin kurang efisien untuk kumpulan data yang sangat besar karena kompleksitasnya adalah O(n^2), di mana n adalah jumlah elemen dalam array. Namun, dalam beberapa kasus, Insertion Sort dapat menjadi pilihan yang baik karena sederhana dan mudah dimengerti[2].

Pseudocode Algoritma Insertion Sort:

```C+
for i = 1 to n-1
set j = i
set t = a[j]
repeat while j > 0 and a[j-1] > t
move a[j-1] to right
end repeat
set a[j] = t
end for
```
Ini adalah pseudocode untuk algoritma Insertion Sort, yang menggambarkan langkah-langkahnya dalam mengurutkan sebuah array.

Prosedur Insertion Sort dalam bahasa C++:

```C++
void insertion_sort(int arr[], int length) {
int i, j ,tmp;
for (i = 1; i < length; i++) {
 j = i;
while (j > 0 && arr[j - 1] > arr[j]) {
 tmp = arr[j];
 arr[j] = arr[j - 1];
 arr[j - 1] = tmp;
 j--;
 }//end of while loop
}//end of for loop
}
```
Pseudocode ini merepresentasikan langkah-langkah yang diperlukan untuk mengimplementasikan algoritma Insertion Sort dalam bahasa C untuk mengurutkan array integer.

CONTOH 

```C++
#include <iostream>
using namespace std;
void insertion_sort(int arr[], int length) {
 int i, j ,tmp;
 for (i = 1; i < length; i++) {
 j = i;
 while (j > 0 && arr[j - 1] > arr[j]) {
 tmp = arr[j];
 arr[j] = arr[j - 1];
 arr[j - 1] = tmp;
 j--;
 }//end of while loop
 }//end of for loop
}
void print_array(int a[], int length) {
 for(int i=0; i<length; i++) {
 cout << a[i] << "\t";
 }
 cout << endl;
}
int main() {
 int length = 6;
 int a[length] = {22, 10, 15, 3, 8, 2};
 insertion_sort(a, length);
 print_array(a, length);
}
```
Algoritma ini mengurutkan array integer dalam urutan menaik (ascending).
Hasil akhir dari program ini adalah mencetak array yang sudah diurutkan dalam urutan menaik. Dalam contoh ini, array awal {22, 10, 15, 3, 8, 2} akan diubah menjadi {2, 3, 8, 10, 15, 22} setelah proses pengurutan menggunakan algoritma Insertion Sort.

**BUBBLE SORT**

Konsep dasar Algoritma Bubble Sort

Algoritma Bubble Sort adalah salah satu algoritma sorting sederhana yang membandingkan setiap pasangan elemen berturut-turut dalam sebuah array dan menukar mereka jika mereka berada dalam urutan yang salah[3].

Contoh Prosedur Bubble Sort dalam bahasa C++

```C++
Procedure BubbleSort(A: list of sortable items)
    n = length(A)
    for i from 0 to n - 1 do
        for j from 0 to n - i - 1 do
            if A[j] > A[j + 1] then
                swap(A[j], A[j + 1])
            end if
        end for
    end for
End Procedure
```

CONTOH

```C++
#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                // Tukar elemen
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main() {
    int arr[] = {18, 4, 5, 25, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr, n);
    cout << "Array yang diurutkan menggunakan Bubble Sort: \n";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}
```
Coding di atas adalah implementasi algoritma Bubble Sort dalam bahasa pemrograman C++. Ini berfungsi untuk mengurutkan array angka secara ascending (dari kecil ke besar). 

Pada fungsi `bubbleSort`, terdapat dua perulangan bersarang. Perulangan pertama (`for (int i = 0; i < n-1; i++)`) digunakan untuk mengatur jumlah iterasi yang dibutuhkan untuk mengurutkan seluruh elemen dalam array. Perulangan kedua (`for (int j = 0; j < n-i-1; j++)`) berjalan di dalam perulangan pertama dan bertanggung jawab untuk membandingkan dan menukar pasangan elemen yang tidak terurut.

Jika elemen saat ini lebih besar dari elemen berikutnya, maka dilakukan pertukaran elemen tersebut sehingga elemen dengan nilai lebih kecil akan bergerak ke depan. Proses ini terus berlanjut sampai seluruh elemen dalam array diurutkan.

Setelah fungsi `bubbleSort` dijalankan pada array yang diberikan dalam fungsi `main`, array yang diurutkan akan dicetak ke layar dalam urutan yang benar.

**SELECTION SORT**

Selection Sort adalah algoritma pengurutan sederhana yang bekerja dengan cara secara berulang memilih elemen terkecil (atau terbesar, tergantung pada kebutuhan) dari sisa array yang belum diurutkan, dan menukarnya dengan elemen pertama array yang belum diurutkan. 

Pseudocode Selectionsort:
```C++
SelectionSort(arr):
    n = length of arr
    for i from 0 to n - 1:
        minIndex = i
        for j from i + 1 to n - 1:
            if arr[j] < arr[minIndex]:
                minIndex = j
        if minIndex != i:
            swap arr[i] with arr[minIndex]
```

CONTOH 

```C++
#include <iostream>
using namespace std;

void selectionSort(int arr[], int n) {
	int pos_min, temp;
	for (int i=0; i < n-1; i++) {
		pos_min = i;
		for (int j=i+1; j < n; j++) {
			if (arr[j]  < arr[pos_min])
			pos_min = j;
		}
		if (pos_min != i) {
			temp = arr[i];
			arr[i] = arr [ pos_min];
			arr[pos_min] = temp;
		}
	}
}
```
Algoritma Selection Sort ini bekerja dengan cara memilih elemen terkecil dari array dan menukar posisinya dengan elemen pertama. Proses ini diulangi untuk elemen kedua, ketiga, dan seterusnya hingga seluruh array diurutkan.

**GUIDED 1**

1. Mengurutkan secara ascending untuk data numerik bertipe double menggunakan
Algoritma Bubble Sort
```C++
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
```
```C++
#include <iostream> 
using namespace std; 
```
Interpetasinya : 

#include <iostream>: Ini adalah direktif preprocessor yang menginstruksikan kompiler untuk menyertakan konten dari pustaka iostream. Pustaka ini menyediakan fungsi-fungsi untuk input-output standar, seperti cin dan cout.

using namespace std;: Ini adalah deklarasi yang memberi tahu kompiler bahwa kita akan menggunakan namespace std. Namespace std adalah tempat dimana semua fungsi dan objek standar C++, seperti cin dan cout, didefinisikan.

```C++
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
```
Interpretasinya :

void bubbleSort(double arr[], int n): Ini adalah deklarasi fungsi bubbleSort yang menerima dua argumen, yaitu sebuah array arr yang berisi elemen-elemen numerik yang akan diurutkan, dan sebuah bilangan bulat n yang merupakan panjang array tersebut.

for (int i = 0; i < n - 1; i++): Ini adalah loop luar yang mengatur berapa kali iterasi akan dilakukan. Loop ini akan berjalan sebanyak n - 1 kali, karena pada setiap iterasi, elemen terbesar akan 'menggelembung' ke bagian paling belakang dari array.

for (int j = 0; j < n - i - 1; j++): Ini adalah loop dalam yang melakukan perbandingan dan pertukaran elemen-elemen secara berpasangan. Loop ini akan berjalan dari indeks 0 hingga n - i - 1, karena setiap iterasi dari loop luar (i) akan menempatkan elemen terbesar ke posisi yang benar, sehingga tidak perlu lagi membandingkan elemen tersebut.

if (arr[j] > arr[j + 1]): Ini adalah kondisi yang mengecek apakah elemen saat ini lebih besar dari elemen berikutnya. Jika iya, maka dilakukan pertukaran elemen tersebut.
double temp = arr[j]; arr[j] = arr[j + 1]; arr[j + 1] = temp;: Ini adalah proses pertukaran elemen. Elemen yang lebih besar disimpan dalam variabel sementara (temp), kemudian elemen-elemen tersebut ditukar posisinya.

```C++
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
```

Interpretasinya : 

Program meminta pengguna untuk memasukkan jumlah data numerik.

Program membuat sebuah array dengan ukuran sejumlah data yang dimasukkan oleh pengguna.

Pengguna diminta untuk memasukkan setiap data numerik, dan data tersebut disimpan dalam array.

Setelah semua data dimasukkan, program mengurutkan data secara ascending menggunakan algoritma bubble sort.

Setelah pengurutan selesai, program menampilkan data yang telah diurutkan secara ascending.

HASIL OUTPUT 
```C++
Masukkan jumlah data numerik: 5
Masukkan 5 data numerik:
Data ke-1: 6
Data ke-2: 10
Data ke-3: 2
Data ke-4: 7
Data ke-5: 3

Data setelah diurutkan secara ascending:
2.00 3.00 6.00 7.00 10.00
--------------------------------
Process exited after 54.34 seconds with return value 0
Press any key to continue . . .
```

**GUIDED 2**

2. Mengurutkan karakter secara descending (dari terbesar hingga terkecil) menggunakan
Algoritma Insertion Sort
```C++
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
```
```C++
#include <iostream> 
using namespace std; 
```
Interpetasinya : 

#include <iostream>: Ini adalah direktif preprocessor yang menginstruksikan kompiler untuk menyertakan konten dari pustaka iostream. Pustaka ini menyediakan fungsi-fungsi untuk input-output standar, seperti cin dan cout.

using namespace std;: Ini adalah deklarasi yang memberi tahu kompiler bahwa kita akan menggunakan namespace std. Namespace std adalah tempat dimana semua fungsi dan objek standar C++, seperti cin dan cout, didefinisikan.

```C++
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
```

Interpretasinya :

Fungsi `insertionSortDescending` yang didefinisikan di atas menerapkan algoritma insertion sort untuk mengurutkan array karakter secara descending. Dalam algoritma ini, setiap elemen dari array diambil satu per satu dan ditempatkan pada posisi yang tepat di bagian yang sudah terurut dari array. Proses ini dilakukan dengan membandingkan elemen yang sedang diproses dengan elemen-elemen sebelumnya dalam bagian terurut, dan jika ditemukan elemen yang lebih kecil dari elemen yang sedang diproses, elemen tersebut akan digeser ke kanan untuk membuat ruang bagi elemen yang sedang diproses. Langkah terakhir adalah menyisipkan elemen yang sedang diproses ke posisi yang tepat dalam bagian terurut. Dengan demikian, setiap iterasi dari algoritma insertion sort memperluas bagian yang terurut dari array hingga semua elemen telah diurutkan secara descending. Penting untuk dicatat bahwa proses pengurutan dilakukan langsung pada array yang diberikan, tanpa menggunakan array tambahan.

```C++
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
```

Interpretasinya : 

Program diatas meminta pengguna untuk memasukkan sejumlah karakter, menyimpannya dalam sebuah array, mengurutkannya secara descending menggunakan algoritma insertion sort, dan akhirnya menampilkan hasil pengurutan tersebut. Awalnya, program akan meminta pengguna untuk memasukkan jumlah karakter yang diinginkan. Setelah itu, program akan meminta pengguna untuk memasukkan karakter-karakter tersebut satu per satu. Kemudian, program akan mengurutkan karakter-karakter tersebut secara descending dan menampilkannya kepada pengguna. Proses pengurutan dilakukan menggunakan algoritma insertion sort. Program kemudian akan mengakhiri eksekusi dengan mengembalikan nilai 0, menandakan bahwa program telah berakhir dengan sukses.


**UNGUIDED 1**

Kelas S1 IF 2016 G memiliki 5 mahasiswa. Pada akhir semester mereka menerima
lembar Indeks Prestasi Semester (IPS), masing-masing mahasiswa tersebut memiliki IPS
sebagai berikut: {3.8, 2.9, 3.3, 4.0, 2.4}. Buatlah program untuk mengurutkan IPS
mahasiswa tersebut dari yang terbesar hingga terkecil dengan menggunakan algoritma
Selection Sort!
```C++
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
```
```C++
#include <stdio.h>
```
Interpretasinya : 

Header file <stdio.h> biasanya digunakan untuk mendefinisikan fungsi-fungsi standar untuk input dan output seperti printf() dan scanf(

```C++
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
```
Interpretasinya : 

Kode yang disajikan adalah implementasi algoritma Selection Sort dengan variasi yang menarik. Biasanya, Selection Sort mengurutkan elemen dari yang terkecil ke yang terbesar. Namun, dalam kasus ini, kode tersebut mengurutkan elemen dari yang terbesar ke yang terkecil. Fungsi `selectionSort` menerima dua parameter: sebuah array `arr` yang berisi elemen bertipe float, dan sebuah integer `n` yang menunjukkan jumlah elemen dalam array. Proses dimulai dengan loop luar yang mengatur berapa banyak elemen yang akan diurutkan. Di setiap iterasi, sebuah indeks `maxIndex` diinisialisasi dengan nilai `i`, yang kemudian digunakan untuk menyimpan indeks elemen terbesar dalam sisa array yang belum diurutkan. Loop dalam kemudian mencari elemen terbesar dan memperbarui `maxIndex` jika ditemukan elemen yang lebih besar. Setelah loop dalam selesai, dilakukan pengecekan apakah `maxIndex` berbeda dari `i`. Jika ya, maka dilakukan penukaran elemen yang sesuai. Proses ini berlanjut hingga hampir seluruh array telah diurutkan secara menurun, dari elemen terbesar ke terkecil. Ini adalah implementasi yang bermanfaat dalam situasi di mana urutan terbalik lebih diinginkan.

```C++
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
```
Interpretasinya :

Deklarasi Array ips: Program mendeklarasikan dan menginisialisasi sebuah array ips dengan nilai-nilai berupa {3.8, 2.9, 3.3, 4.0, 2.4}. Array ini merepresentasikan nilai-nilai yang biasanya menggambarkan Indeks Prestasi Semester (IPS) siswa.

Menghitung Jumlah Elemen Array: Program menghitung jumlah elemen dalam array ips dengan menggunakan operasi sizeof(ips) / sizeof(ips[0]). Di sini, sizeof(ips) menghasilkan total ukuran byte dari array, dan sizeof(ips[0]) menghasilkan ukuran byte dari satu elemen array. Pembagian kedua nilai ini memberikan jumlah elemen dalam array, yang dalam kasus ini adalah 5.

Menampilkan Array Sebelum Disortir: Program mencetak isi array ips sebelum proses pengurutan menggunakan loop for. Setiap elemen dicetak dengan satu angka di belakang koma.

Pengurutan Menggunakan selectionSort: Program memanggil fungsi selectionSort dengan parameter array ips dan ukurannya n. Secara umum, selectionSort adalah algoritma pengurutan yang bekerja dengan memilih elemen minimum dari array yang belum diurutkan dan menukarnya dengan elemen di awal array tersebut.

Menampilkan Array Setelah Disortir: Setelah pengurutan, program mencetak isi array ips yang sekarang sudah diurutkan dari yang terbesar ke terkecil, berdasarkan asumsi bahwa selectionSort diimplementasikan untuk melakukan pengurutan menurun (descending order).

Fungsi main Mengembalikan 0: Ini menandakan bahwa program berakhir dengan sukses.

HASIL OUTPUT
```C++
IPS sebelum diurutkan:
3.8 2.9 3.3 4.0 2.4
IPS setelah diurutkan dari yang terbesar hingga terkecil:
4.0 3.8 3.3 2.9 2.4

--------------------------------
Process exited after 0.05073 seconds with return value 0
Press any key to continue . . .
```

**UNGUIDED 2**

Pak RT memiliki 10 warga dengan nama: siti, situ, sana, ana, ani, caca, cici, dida, dodo,
dan dadi. Supaya mudah dalam melakukan pencarian, Pak RT akan mengurutkan namanama tersebut sesuai dengan alfabet. Buatlah program untuk membantu Pak RT dengan
menggunakan algoritma Bubble Sort
```C++
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
```
```C++
#include <stdio.h>
#include <string.h>
```
Interpretasinya :

File header <stdio.h> adalah bagian dari standar library C dan menyediakan fungsi-fungsi untuk input dan output.

File header <string.h> juga merupakan bagian dari standar library C dan menyediakan fungsi-fungsi untuk manipulasi string seperti strcpy(), strcat(), dan lain-lain.
```C++
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
```
Intterpretasinya :

Kode tersebut adalah implementasi sederhana dari algoritma Bubble Sort untuk mengurutkan array string secara leksikografis (berdasarkan urutan abjad). Algoritma tersebut membandingkan string-string berdekatan dalam array, dan jika ditemukan bahwa string pertama lebih besar dari string kedua, mereka ditukar posisinya. Proses ini diulangi hingga seluruh array terurut. Meskipun sederhana, algoritma Bubble Sort kurang efisien untuk dataset besar karena memiliki kompleksitas waktu yang buruk (O(n²)).

```C++
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
```
Innterpretasinya :

Kode di atas merupakan program dalam bahasa C yang menggunakan algoritma bubble sort untuk mengurutkan array names yang berisi beberapa nama dalam bentuk array dua dimensi. Program ini menampilkan nama-nama sebelum diurutkan, kemudian mengurutkan nama-nama tersebut secara alfabetis menggunakan bubble sort, dan akhirnya menampilkan nama-nama setelah diurutkan. Namun, perlu diingat bahwa implementasi fungsi bubbleSort() tidak disediakan dalam kode tersebut.


Program di atas menciptakan dan menginisialisasi sebuah array 2D yang berisi beberapa nama, kemudian menggunakan algoritma bubble sort untuk mengurutkan nama-nama tersebut secara alfabetis, dan akhirnya mencetak nama-nama tersebut sebelum dan sesudah diurutkan.

HASIL OUTPUT 
```C++
Nama-nama sebelum diurutkan:
siti
situ
sana
ana
ani
caca
cici
dida
dodo
dadi

Nama-nama setelah diurutkan secara alfabetis:
ana
ani
caca
cici
dadi
dida
dodo
sana
siti
situ

--------------------------------
Process exited after 0.05929 seconds with return value 0
Press any key to continue . . .
```

**UNGUIDED 3**

Buatlah program yang meminta user menginputkan suatu bilangan n dan meminta user
untuk menginputkan sejumlah n karakter. Kemudian program akan melakukan sorting
secara menaik (ascending) dan menurun (descending)
```C++
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
```
```C++
#include <stdio.h>
```
Interpretasinya : 

File header <stdio.h> adalah bagian dari standar library C dan menyediakan fungsi-fungsi untuk input dan output.

```C++
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
```
Interpretasinya : 

Kode di atas adalah implementasi fungsi dalam bahasa C untuk mengurutkan sebuah array karakter secara menaik menggunakan metode pengurutan gelembung. Algoritma ini membandingkan pasangan elemen bersebelahan dalam array dan menukar posisi jika diperlukan. Ini terus berulang hingga seluruh array terurut. Hasilnya adalah array yang berisi karakter-karakter dalam urutan abjad yang meningkat.

```C++
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
```
Interpretasinya :

Fungsi `descendingSort` menggunakan algoritma Bubble Sort untuk mengurutkan array karakter secara menurun. Algoritma ini membandingkan dua elemen berturut-turut dalam array dan menukar mereka jika urutannya tidak sesuai. Proses ini diulangi sampai tidak ada lagi pertukaran yang diperlukan. Hasilnya adalah array yang terurut secara menurun.

```C++
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
```
Interpretasinya : 

Kode tersebut meminta pengguna untuk memasukkan sejumlah karakter, menyimpannya dalam sebuah array, mengurutkannya secara menaik, kemudian menampilkan hasilnya. Setelah itu, program akan mengurutkan karakter tersebut secara menurun dan menampilkan hasilnya lagi. Namun, perlu dicatat bahwa fungsi untuk mengurutkan secara menaik dan menurun belum didefinisikan dalam kode tersebut.

HASIL OUTPUT 
```C++
Masukkan jumlah karakter (n): 5
Masukkan 5 karakter:
Karakter ke-1: a
Karakter ke-2: b
Karakter ke-3: c
Karakter ke-4: d
Karakter ke-5: e

Karakter setelah diurutkan secara menaik:
a b c d e
Karakter setelah diurutkan secara menurun:
e d c b a
--------------------------------
Process exited after 7.489 seconds with return value 0
Press any key to continue . . .
```

**DAFTAR PUSTAKA**

Endang Retnoningsih. (2018). Algoritma Pengurutan Data (Sorting) Dengan Metode Insertion Sort dan Selection Sort. Information Management for Educators and Professionals, 3(1), 95–106.

Sonita, A., & Nurtaneo, F. (2016). Analisis Perbandingan Algoritma Bubble Sort, Merge Sort, Dan Quick Sort Dalam Proses Pengurutan Kombinasi Angka Dan Huruf. Pseudocode, 2(2), 75–80. https://doi.org/10.33369/pseudocode.2.2.75-80

Print, I., Online, I., Sistem, E., Kemajuan, I., Mobile, A. S., Metode, M., Evaluation, H., & Scale, S. U. (2020). Jurnal Ilmu Komputer Indonesia ( JIK ) Vol : 5 , No . 2 , November 2020 Jurnal Ilmu Komputer Indonesia ( JIK ) Vol : 5 , No . 2 , November 2020 ISSN ( Print ): 2615-2703 , ISSN ( Online ): 2615-2711. 2, 1–13.




