#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() {
    cin.tie(NULL);
    std::ios_base::sync_with_stdio(false);
    
    int n;
    cin >> n;
    vector<string> vec;
    for (int i =0; i<n; i++) {
        string s;
        cin >> s;
        vec.push_back(s);
    }
    for(int i= 0 ; i < vec.size();i++) {
        cout << vec[i][0] << vec[i][vec[i].length() -1 ] << endl;
    }
    return 0;
}