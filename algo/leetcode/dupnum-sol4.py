import copy
# time-O(n), space-O(n)
def dupnum(arr):
    for i in range(len(arr)): 
        if arr[arr[i]] == -abs(arr[arr[i]]):
            return i
        else:
            arr[arr[i]] = -arr[arr[i]]
         
      
print(dupnum([5,4,3,2,1,3])) 
print(dupnum([1,2,3,4,2]))