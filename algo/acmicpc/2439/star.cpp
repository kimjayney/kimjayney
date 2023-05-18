#include <iostream>
using namespace std;


int main() {
    cin.tie(NULL);
    std::ios_base::sync_with_stdio(false);
    int n;
    cin >> n;
    
    // i를 1부터 설정해야 줄바꿈현상 안생김
    for(int i = 1 ; i <= n ; i++) {
        for (int j = 0; j < i; j++) {
            cout << "*";
        }
        cout << "\n";
    }
}