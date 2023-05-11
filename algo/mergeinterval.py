def mergeinterval(arr):
    arr.sort()     # 인덱스 0번째 기준으로 정렬되는거임 [0]기준
    lastidx = len(arr)
    for i in range(1,lastidx):
        if i >= len(arr) -1:
            if arr[i -1][1] >= arr[i][0]: # if can merge
                arr[i-1][1] = arr[i][1] 
                arr.remove(arr[i])
                lastidx = len(arr)  
    return arr

print(mergeinterval([[1,5],[3,7],[10,15],[8,16]]))
print(mergeinterval([[1,3],[2,6],[8,10],[15,18]]))
print(mergeinterval([[1,4],[4,5]]))