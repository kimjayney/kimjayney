#include <iostream>
using namespace std;


int main() {
    cin.tie(NULL);
    std::ios_base::sync_with_stdio(false);
    int n;
    cin >> n;
    // cout << n << "\n";
    for(int i = 0 ; i < n ; i++) {
        int num1, num2;
        cin >> num1 >> num2;
        // cout << num1 << "," << num2 << "\n";
        cout << "Case #" << i +1 << ": " << num1 << " + " << num2 << " = " << num1+ num2 << "\n";
    }
    
}   