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
    for (int i = 0; i < n; i++) {
        bucket[i] = i + 1;
    }
    for (int i = 0; i < m; i++) {
        int a;
        int b;
        cin >> a >> b;
        int temp_a = bucket[a -1 ];
        int temp_b = bucket[b -1];
        bucket[a -1 ] = temp_b;
        bucket[b -1 ] = temp_a;
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