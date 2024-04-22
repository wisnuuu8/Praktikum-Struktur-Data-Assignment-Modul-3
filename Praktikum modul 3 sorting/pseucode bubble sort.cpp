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

