SelectionSort(arr):
    n = length of arr
    for i from 0 to n - 1:
        minIndex = i
        for j from i + 1 to n - 1:
            if arr[j] < arr[minIndex]:
                minIndex = j
        if minIndex != i:
            swap arr[i] with arr[minIndex]

