#include <algorithm>
#include <iostream>
#include <string>
using namespace std;
int main() {
    cin.tie(NULL);
    std::ios_base::sync_with_stdio(false);
    
    string s;
    cin >> s;
    int location;
    cin >> location;
    cout << s[location -1 ];

    return 0;
}