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
