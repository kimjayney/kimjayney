 
def moveZeroes(self, arr: List[int]) -> None:
    """
    Do not return anything, modify nums in-place instead.
    """
    force_zero = 0
    
    for i in range(0, len(arr)):
        if arr[i] != 0:
            arr[force_zero] = arr[i]
            force_zero = force_zero + 1
    for i in range(force_zero, len(arr)):
        arr[i] = 0 