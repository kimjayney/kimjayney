#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    string s;
    cin >> s;
    int idx = 0;
    string new_str;
    int count = 0; 
    while(true) {
        // cout << idx << endl;
        if (idx - 1 == s.length()) {
            break;
        } else { 
            if (isalpha(s[idx])) {
                if (s[idx] == 'd' && s[idx + 1] == 'z' && s[idx+2] == '=') {
                    idx = idx + 3; 
                } else if (s[idx] == 'd' && s[idx] == 'z') {
                    idx = idx + 2;
                } else if (s[idx] == 'l' && s[idx + 1] == 'j') {
                    idx = idx + 2;
                } else if (s[idx] == 'n' && s[idx + 1] == 'j') {
                    idx = idx + 2;
                } else {
                    idx = idx + 1;
                }
                count++;
            } else {
                idx++;
            }
            // idx++;
        }
    }
    cout << count << endl;
    return 0;
}