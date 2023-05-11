def bs(array, num):
    left = 0
    right = len(array) - 1
    mid = int(len(array) // 2) 
    while(left <= right): 
        if num > array[mid]:
            left = mid + 1
        elif num < array[mid]:
            right = mid - 1
        mid = int((left + right) //2)
        if array[mid] == num:
            return mid
        
    return -1
    
print(bs([1,2,3,4,5,10,20,30], 2))