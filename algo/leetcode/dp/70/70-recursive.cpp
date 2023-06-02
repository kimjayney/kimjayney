#include <iostream>

class Solution {
public:
    int fibo(int n) {
        if (n == 0) {
            return 0;
        } else if (n ==1) {
            return 1;
        } else if (n == 2) {
            return 2;
        } else {
            int fib = fibo(n -1) + fibo(n-2);
            return fib;
        }
    }
    int climbStairs(int n) {
        return fib(n);
    }
};