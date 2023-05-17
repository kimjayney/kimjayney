# O(nlogn)
def dupnum(arr):
    arr.sort()
    next_idx = 1
    for i in range(len(arr)):
        if arr[i] == arr[next_idx]:
            return arr[i]
        if i != len(arr) -1:
            next_idx = next_idx + 1
        
    
print(dupnum([5,4,3,2,1,3]))
print(dupnum([1,2,3,4,2]))