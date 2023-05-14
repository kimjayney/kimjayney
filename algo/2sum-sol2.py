#O(NlogN)
def sumfor2element(arr, target):
    arr.sort()
    left = 0
    right = len(arr) - 1 
    print(arr)
    
    while left < right:
        sums = arr[left] + arr[right]
        if sums == target:
            return [left, right]
        elif sums > target:
            right = right -1
        elif sums < target:
            left = left + 1
        
print(sumfor2element([1,3,7,4,8], 7))