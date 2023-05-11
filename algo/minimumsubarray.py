# Not working
def minimumsubarr(arr, findvalue):
    sumarr = 0
    element_counts = []
    internal_iterate = 0
    for i in range(0, len(arr)):
        sumarr = sumarr + arr[i]
        internal_iterate = internal_iterate + 1
        print(sumarr)
        if sumarr > findvalue:
            sumarr = 0
            internal_iterate = 0
        elif sumarr == findvalue:
            element_counts.append(internal_iterate)
            
    print(element_counts)
    return min(element_counts)
        

print(minimumsubarr([3,4,2,1,3,2], 7))