#O(N^2)
def sumfor2element(arr, target):
    for i in range(len(arr)):
        for j in range(len(arr)):
            if arr[i] + arr[j] == target:
                return [i,j]
        
print(sumfor2element([1,3,7,4,8], 5))