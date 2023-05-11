# bruth force method O(N^2)
def dupnum(arr):
    for i in range(len(arr)):
        for j in range(len(arr)):
            if arr[i] == arr[j] and i != j:
                return arr[i]


print(dupnum([5,4,3,2,1,3]))
print(dupnum([1,2,3,4,2]))