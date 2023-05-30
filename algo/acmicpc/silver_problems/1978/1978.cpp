#include <iostream>

using namespace std;

int main() {
    int n; 
    cin >> n;
    int count = 0;
    for(int i = 0; i< n; i++) {
        int num;
        cin >> num; 
        if (num > 1) {
            int dividecount = 0;
            for(int j = num; j > 0; j--) {
                if (dividecount >=3) {
                    break;
                }
                int divideresult = num % j;
                if (divideresult == 0) {
                    dividecount++;
                }
            }
            if (dividecount == 2) {
                count++; 
            }
        }
    }
    cout << count;
    return 0;
}