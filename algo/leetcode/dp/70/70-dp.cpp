#include <vector>
#include <iostream>
using namespace std;
class Solution {
public:
    int fibodp(int n){
        if (n == 0) {
            return 0 ;
        } else if (n == 1) {
            return 1;
        }  
        vector<long> fibo_array= {1,2};
        for(int i = 2; i < n + 1; i++) { 
            int sum = fibo_array[i-1] + fibo_array[i-2] ;
            fibo_array.push_back(sum);
             
        } 
        return fibo_array[n-1];
        
    }
    int climbStairs(int n) {
        return fibodp(n); 

    }
};
 