def sortcolor1(arr):
    pink_pointer = 0
    green_pointer = len(arr) - 1
    orange_pointer = 0 
    while(pink_pointer<= green_pointer): 
        # green_pointer = green_pointer - 1 
        if arr[pink_pointer] == 0:
            arr[orange_pointer], arr[pink_pointer] = arr[pink_pointer], arr[orange_pointer]
            pink_pointer = pink_pointer + 1
            orange_pointer = orange_pointer + 1
            
        elif arr[pink_pointer] == 2:
            arr[pink_pointer], arr[green_pointer] = arr[green_pointer], arr[pink_pointer]
            green_pointer = green_pointer - 1
        else: 
            pink_pointer = pink_pointer + 1 
    return arr





print(sortcolor1([1,0,2,2,0,1,2,1,0]))