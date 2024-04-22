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
