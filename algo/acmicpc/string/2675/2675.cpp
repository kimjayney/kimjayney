#include <iostream>
#include <string>
using namespace std;

int main() {
    int n ;
    cin >> n;
    
    for (int i = 0; i < n ; i++) {
        int repeatcount;
        cin >> repeatcount;
        string s;
        cin >> s; 
        for (int i = 0; i < s.size(); i++) {
            for (int j = 0; j < repeatcount ; j++) { 
                cout << s[i];
            }
        }
        cout << endl;
    }
    return 0;
}