#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    cin.tie(NULL);
    std::ios_base::sync_with_stdio(false);
    vector<int> vec1(5);
    int sum = 0;
    int center = 0;
    for(int i = 0; i < 5; i++) { 
        int num;
        cin >> num;
        sum += num;
        vec1[i] = num;
    }
    sort(vec1.begin(), vec1.end()); 
    cout << (sum / 5) << endl;
    cout << vec1[2] << endl;
    return 0;
}