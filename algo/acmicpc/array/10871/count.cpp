#include <iostream>
#include <vector>
using namespace std;


int main() {
    cin.tie(NULL);
    std::ios_base::sync_with_stdio(false);
    int n;
    cin >> n;

    vector<int> myvec1;
    
    for (int i = 0; i < n; i++) {
        int s;
        cin >> s;
        myvec1.emplace_back(s);
    }
    int findnum;
    cin >> findnum;
    // iterate
    int matchedcount = 0;
    for( int & num: myvec1) {
        if (findnum == num) {
            matchedcount = matchedcount + 1;
        }
    }
    cout << matchedcount << "\n";
    
}