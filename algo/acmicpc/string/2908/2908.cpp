#include <algorithm>
#include <string>
#include <iostream>

using namespace std;

int main() {
    string first;
    string second;
    cin >> first;
    cin >> second;
    reverse(first.begin(), first.end());
    reverse(second.begin(), second.end());
    
    if (stoi(first) > stoi(second)) {
        cout << first;
    } else {
        cout << second;
    }
    return 0;
}