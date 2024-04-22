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

Ascending (Menaik): Dalam urutan ascending, item-item disusun dari nilai terkecil ke nilai terbesar. Artinya, elemen dengan nilai paling rendah akan berada di bagian awal atau depan, sedangkan elemen dengan nilai tertinggi akan berada di bagian akhir atau belakang.

Descending (Menurun): Sebaliknya, dalam urutan descending, item-item disusun dari nilai terbesar ke nilai terkecil. Dengan kata lain, elemen dengan nilai tertinggi akan berada di bagian awal atau depan, sedangkan elemen dengan nilai paling rendah akan berada di bagian akhir atau belakang.

**INSERTION SORT**

Algoritma Insertion Sort adalah salah satu algoritma sorting sederhana yang efisien untuk mengurutkan kumpulan data. Ini bekerja dengan cara membandingkan setiap elemen dengan elemen sebelumnya dalam array, dan memasukkan elemen tersebut ke dalam posisi yang tepat sesuai dengan urutan yang diinginkan. Berikut adalah konsep dasar dari algoritma Insertion Sort:

1. Iterasi Melalui Array : Algoritma dimulai dengan mengiterasi melalui array, dimulai dari indeks kedua (indeks 1), karena elemen pertama dianggap sudah terurut.

2. Pengecekan dan Penyisipan : Pada setiap iterasi, algoritma membandingkan elemen saat ini dengan elemen-elemen sebelumnya dalam array. Jika elemen saat ini lebih kecil dari elemen sebelumnya, algoritma akan memindahkan elemen tersebut ke posisi yang benar di dalam array dengan cara menyisipkannya ke dalam posisi yang tepat. Ini dilakukan dengan cara memindahkan elemen-elemen yang lebih besar satu posisi ke kanan.

3. Iterasi Berlanjut : Proses ini diulangi untuk setiap elemen dalam array, sehingga setiap elemen diposisikan dengan benar di dalam urutan yang diinginkan.

4. Penyelesaian : Setelah iterasi selesai, array akan berada dalam keadaan terurut, dari elemen terkecil ke elemen terbesar.

Algoritma Insertion Sort sangat efisien untuk mengurutkan kumpulan data yang relatif kecil atau hampir terurut, tetapi mungkin kurang efisien untuk kumpulan data yang sangat besar karena kompleksitasnya adalah O(n^2), di mana n adalah jumlah elemen dalam array. Namun, dalam beberapa kasus, Insertion Sort dapat menjadi pilihan yang baik karena sederhana dan mudah dimengerti.

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

Algoritma Bubble Sort adalah salah satu algoritma sorting sederhana yang membandingkan setiap pasangan elemen berturut-turut dalam sebuah array dan menukar mereka jika mereka berada dalam urutan yang salah

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



