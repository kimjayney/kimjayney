import time
def main(n, k):
    set_n = n
    operator_count = 0
    while (True):
        result = set_n % k
        operator_count = operator_count + 1
        if result == 1:
            set_n = set_n - 1
            continue
        else:
            set_n = set_n // k
        if set_n == 1:
            break
        time.sleep(1)
    print(operator_count)

  
main(25,5)
