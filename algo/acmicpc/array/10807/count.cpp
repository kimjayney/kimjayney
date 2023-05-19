#include <iostream>
#include <vector>
using namespace std;


int main() {
    cin.tie(NULL);
    std::ios_base::sync_with_stdio(false);
    int n, x ;
    cin >> n >> x;

    vector<int> myvec1;

    for (int i = 0; i < n; i++) {
        int s;
        cin >> s;
        myvec1.emplace_back(s);
    }

    int count = 0;
    vector<int> result;
    for( int & num: myvec1) {
        if (num < x ) {
            result.emplace_back(num);
        }
    }

    for (int & num: result) {
        if (count == result.size() -1 ) {
            cout << num; 
        } else {
            cout << num << " ";
        }
        count = count + 1;
    }
}