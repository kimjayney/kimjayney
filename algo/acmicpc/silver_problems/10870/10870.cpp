#include <iostream>
using namespace std;
int fibo(int n) {
    if (n== 0 || n == 1) {
        return 1;
    }
    return fibo(n-2) + fibo(n-1); 
}
int main() { 
    cin.tie(NULL);
    std::ios_base::sync_with_stdio(false);
    int s;
    cin >> s;
    if (s==0) {
        cout << 0;
    } else {
        cout << fibo(s -1);
    }
    
    return 0;   
}