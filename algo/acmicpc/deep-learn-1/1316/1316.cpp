#include <iostream>
#include <vector>
using namespace std;

bool checkinstr(char chs, string &s) {
    for(int i = 0; i < s.length(); i++) {
        if (chs == s[i]) {
            return true;
        }
    }
    return false;
}
int main() {
    int n;
    cin >> n;
    int count = 0;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        string newstr;
        for(int j = 0; j < s.length(); j++) {
            if (checkinstr(s[j], newstr) == false) {
                newstr += s[j];
            } else {
                if (j > 0 ) {
                    if (s[j-1] == s[j]) {
                        newstr += s[j];
                    } else {
                        break;
                    }
                }
            }
            if (newstr == s) {
                count++;
            }
        }
        
    }
    cout << count;

    return 0;
}