import copy
# time-O(n), space-O(n)
def dupnum(arr):
    new_array = copy.deepcopy(arr)
    # 처음엔 체크를 true로 했는데
    # 파이썬의 == 연산자는 1 과 True를 똑같이 인식하기 때문에
    # 4가 return이 되는 문제가 있다. 
    # 그래서 true 대신 그냥 string으로 체크하는 방식을 선택했다.
    
    for i in range(len(arr)): 
        if new_array[arr[i]] == 'x':
            return arr[i]
        else:
            new_array[arr[i]] = 'x'
        
      
print(dupnum([5,4,3,2,1,3])) 