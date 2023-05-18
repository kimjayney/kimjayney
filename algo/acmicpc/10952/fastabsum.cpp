#include <iostream>
using namespace std;


int main() {
    cin.tie(NULL);
    std::ios_base::sync_with_stdio(false);
    
    while(true) {
        int num1, num2;
        cin >> num1 >> num2;
        if (num1 == 0 && num2 == 0) {
            break;
        } else {
            // cout << num1 << "," << num2 << "\n";
            cout << num1+ num2 << "\n";
        }
        
    }
    
}   