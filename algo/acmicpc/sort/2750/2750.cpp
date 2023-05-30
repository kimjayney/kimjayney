#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> vec1;
    for(int i = 0; i < n; i++ ) {
        int num;
        cin >> num;
        vec1.emplace_back(num);
    }
    sort(vec1.begin(), vec1.end());
    for(int & num: vec1) {
        cout << num << endl;
    }
}