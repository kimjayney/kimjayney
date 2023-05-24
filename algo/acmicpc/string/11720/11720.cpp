#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
using namespace std;
int main() {
    cin.tie(NULL);
    std::ios_base::sync_with_stdio(false);
    int n;
    cin >> n;
    string s;
    cin >> s;
    int sum = 0; 
    for (int i = 0; i < n ; i++) { 
        sum += s[i] - '0'; 
    }
    cout << sum; 
    return 0;
}