#include <iostream>
#include <vector>
#include <string> 
using namespace std;
int main() {
    cin.tie(NULL);
    std::ios_base::sync_with_stdio(false);
    string s;
    cin >> s; 
    vector<int> v(26, -1);
    for ( int i = 0; i < s.size(); i++) {
        int asciitonum = static_cast<int>(s[i]) - 97;
        if (v[asciitonum] == -1) {
            v[asciitonum] = i;
        }
    }
    int count = 0;
    for (int &num : v) {
        if (count == v.size() -1 ) {
            cout << num ; 
        } else {
            cout << num << " "; 
        }
        
        count++;
    }
}