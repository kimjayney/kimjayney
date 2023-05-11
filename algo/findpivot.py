def findpivot(arr):
    array_sum = sum(arr)
    pivot_left = 0
    pivot_right = array_sum
    previous_sum = 0
    for idx in range(0, len(arr)):
        pivot_right = pivot_right - arr[idx]
        pivot_left = pivot_left + previous_sum
        if pivot_right == pivot_left:
            return idx
        previous_sum = arr[idx]
    return -1

print(findpivot([1,8,2,9,2,3,6]))