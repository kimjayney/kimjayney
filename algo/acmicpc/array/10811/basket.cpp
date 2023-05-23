#include <iostream>
#include <vector>
using namespace std;
#include <algorithm>
// 공 넣기 문제

int main() {
    cin.tie(NULL);
    std::ios_base::sync_with_stdio(false);
    int n; // 공
    int m; // loop
    cin >> n >> m;
    vector<int> bucket(n);
    
    for (int i = 0; i < n; i++) {
        bucket[i] = i + 1;
    }
    
    for (int i = 0; i < m ; i++ ) { 
        int left;
        int right;
        cin >> left >> right;  
        reverse(bucket.begin() + (left - 1)  , bucket.begin() + right); 
    }
     
    int count = 0;
    for( int & num: bucket) {         
        if (count == bucket.size() -1 ) {
            cout << num; 
        } else {
            cout << num << " ";
        }
        count = count + 1;
    }
}