import time
def main(n, k):
    set_n = n
    operator_count = 0
    while (True):
        if set_n == 1 or set_n == 0:
            break
        print(f'N={set_n}')
        result = set_n % k
        if result != 0:
            set_n = set_n - 1
            operator_count = operator_count + 1
            print(f'N에서 1 빼기{set_n} - operator = {operator_count}')
            continue
        elif result == 0:
            set_n = set_n // k
            operator_count = operator_count + 1
            print(f'N을 K로 나누기 {set_n} - operator = {operator_count}')
        
        time.sleep(1)
    print(operator_count)

  
main(25,3)
