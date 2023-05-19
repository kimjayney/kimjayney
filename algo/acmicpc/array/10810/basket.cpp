#include <iostream>
#include <vector>
using namespace std;

// 공 넣기 문제

int main() {
    cin.tie(NULL);
    std::ios_base::sync_with_stdio(false);
    int n; // bucket
    int m; // 공
    cin >> n >> m;

    vector<int> bucket(n); // bucket
    for ( int a = 0 ; a < m; a++) {
        int i;
        int j;
        int k; // ball number
        cin >> i >> j >> k;
        for (int range = i; range <= j; range++) {
            bucket[range - 1] = k;
        }
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