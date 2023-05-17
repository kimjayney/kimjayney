#o(mn) KMP
# String matching problem 

def kmp(str, findstr): 
    orange_pointer = 0 # for str
    red_pointer = 0 # for findstr 

    matched_count = 0
    mismatched_count = 0
    start_pointer = None 
    while orange_pointer <= len(str) -1:
        if str[orange_pointer] == findstr[red_pointer] :
            if start_pointer is None:
                start_pointer = orange_pointer + 1 
            matched_count = matched_count + 1
            if matched_count == len(findstr):
                return start_pointer
            orange_pointer = orange_pointer + 1
            red_pointer = red_pointer + 1
        else:
            mismatched_count = mismatched_count + 1
            orange_pointer = mismatched_count
            red_pointer = 0
            matched_count = 0 
            start_pointer = None
    return False

# print match start position 
print(kmp("aaaaabb", "aaab"))


